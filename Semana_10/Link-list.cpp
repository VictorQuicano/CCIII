#include <iostream>
#include <ctime>

using namespace std;

class Nodo {
public:
    int data;
    Nodo* next;
};

class ListaE{
public:
    ListaE() {
        head = NULL;
    }
    ~ListaE() {};
    int size();
    int tama() { return tam; };
    void addNodo(int val);
    void addInPos(int pos, int val);
    void addNodoI(int val);
    void EUNodo();
    void EINodo();
    void EInPos(int pos);
    void sortAs();
    void sortDes();
    void print();
private:
    Nodo* head;
    int tam = 0;
};

int ListaE::size(){
    int c = 0;
    if (head == NULL){
        return c;
    }
    else{
        c++;
        Nodo* temp = head;
        while (temp->next != NULL) { 
            temp = temp->next;
            c++;
        }
        return c;
    }  
}
void ListaE::addNodo(int val) {
    tam++;
    Nodo* NuevoN = new Nodo();
    NuevoN->data = val;
    NuevoN->next = NULL;
    if (head == NULL) {
        head = NuevoN;
    }
    else {
        Nodo* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = NuevoN; 
    }
}
void ListaE::addInPos(int pos, int val){
    if (tam==0){
        Nodo *NodoN = new Nodo();
        NodoN->data = val;
        cout << "La lista estaba vacia, se coloco el valor como incial."<<endl;
        head = NodoN;
        tam++;
        return;
    }
    else{
        if (pos==1){
            addNodoI(val);
            return;
        }
        if (pos<=tam){
            Nodo *temp = head;
            for (int i = 1; i != pos-1; i++){
                temp = temp->next;
            }
            Nodo *temp2 = new Nodo();
            temp2->data = val;
            temp2->next = temp->next;
            temp->next = temp2;
            cout << "Insertado con exito"<<endl;
            tam++;
        }
        else{
            addNodo(val);
            cout << "Insertado con exito"<<endl;
        }
    }
}
void ListaE::addNodoI(int val){
    Nodo *NuevoN = new Nodo();
    NuevoN->data = val;
    NuevoN->next = NULL;
    if (head==NULL){
        head = NuevoN;
    }
    else{
        Nodo *temp = head;
        head = NuevoN;
        head->next = temp;
    }
    tam++;
}
void ListaE::EUNodo(){
    Nodo *temp = head, *temp2;
    if(tam==0){
        cout << "Lista vacia."<<endl;
        return;
    }
    while (temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
    }
    tam += -1;
    temp2->next = temp->next;
    delete temp;
}
void ListaE::EINodo(){
    Nodo *temp = head, *temp2=temp->next;
    head = temp2;
    delete temp;
    tam+=-1;
}
void ListaE::EInPos(int pos){
    if (tam==0){
        cout << "Lista vacia, no hay nada que hacer"<<endl;
    }
    else{
        if(pos<tam){
            Nodo *temp = head, *temp2=NULL;
            for (int i = 1; i < pos;i++){
                temp2 = temp;
                temp = temp->next;
            }
            temp2->next = temp->next;
        }
        else{
            EUNodo();
        }
    }
}
void ListaE::sortAs(){
    Nodo *aux = head;
	int temp;
	while(aux ->next != NULL){
		Nodo *aux2 = aux -> next;
		while(aux2 != NULL){
			if(aux2 -> data < aux -> data){
				temp = aux2 -> data;
				aux2 -> data = aux -> data;
				aux -> data = temp;
			}
			aux2 = aux2 -> next;
		}
		aux = aux -> next;
		aux2 = aux -> next;
	}
}
void ListaE::sortDes(){
    Nodo *aux = head;
	int temp;
	while(aux ->next != NULL){
		Nodo *aux2 = aux -> next;
		while(aux2 != NULL){
			if(aux2 -> data > aux -> data){
				temp = aux2 -> data;
				aux2 -> data = aux -> data;
				aux -> data = temp;
			}
			aux2 = aux2 -> next;
		}
		aux = aux -> next;
		aux2 = aux -> next;
	}
}
void ListaE::print() {
    if (head == NULL) {
        cout << "Lista vacia" << endl;
    }
    else {
        Nodo* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
}

void ingresarN(ListaE *list){
    cout << "-Ingresando nodo-"<<endl;
    cout <<"1) Insertar Nodo"<<endl;
    cout <<"2) Insertar en el inicio"<<endl;
    cout <<"3) En una posicion especifica"<<endl;
    cout << "  >";
    int op{0};
    while (cin>>op){
        if (op==1){
            int a;
            cout << "Cuantos nodos?"<<endl;
            cout<<" > ";
            cin >> a;
            for (int i = 0; i < a; i++){
                int b{0};
                cout << "Nodo #" << i + 1 << "> ";
                cin >> b;
                list->addNodo(b);
            }
            return;
        }
        if (op==2){
            int a;
            cout << "Cuantos nodos?"<<endl;
            cout<<" > ";
            cin >> a;
            for (int i = 0; i < a; i++){
                int b{0};
                cout << "Nodo #" << i + 1 << "> ";
                cin >> b;
                list->addNodoI(b);
            }
            return;
        }
        if (op==3){
            int a, b;
            char x;
            cout << "En que posicion y que valor?"<<endl;
            cout <<" > ";
            cin >> a >> x >> b;
            list->addInPos(a, b);
            return;
        }
        else{
            cout << "valor no valido ingresa otro valor"<<endl;
            cout<<"  > ";
        }
    }
}
void eliminarN(ListaE *list){
    cout << "-Eliminando nodo-"<<endl;
    cout<<"1) Eliminar Nodos"<<endl;
    cout<<"2) Eliminar nodo del inicio"<<endl;
    cout<<"3) En una posicion especifica"<<endl;
    cout<<"  > ";
    int op{0};
    while (cin>>op){
        if (op==1){
            int a;
            cout << "Cuantos nodos?"<<endl;
            cout<<" > ";
            cin >> a;
            for (int i = 0; i < a; i++){
                list->EUNodo();
            }
            return;
        }
        if (op==2){
            int a;
            cout << "Cuantos nodos?"<<endl;
            cout<<" > ";
            cin >> a;
            for (int i = 0; i < a; i++)
                list->EINodo();
            return;
        }
        if (op==3){
            int a;
            cout << "En que posicion?"<<endl;
            cout<<"> ";
            cin >> a;
            list->EInPos(a);
            return;
        }
        else{
            cout << "valor no valido, ingresa otro valor"<<endl;
            cout<<"  > ";
        }
    }
}
void ordenarL(ListaE *list){
    cout << "--ORDENANDO LISTA--" << endl;
    cout << "1) Ascendentemente\n";
    cout << "2) Descenentemente\n";
    int a{0};
    while(cin>>a){
        if(a==1){
            list->sortAs();
            return;
        }
        if(a==2){
            list->sortDes();
            return;
        }
        else{
            cout << "valor no valido, ingresa otro valor"<<endl;
            cout<<"  > ";
        }
    }
}
int main(){
    ListaE *listaM = new ListaE();
    cout << "---BIENVENIDO---";
    while (true){
        cout<<endl<<endl;
        cout << "-MENU-\n";
        cout<<"Que deseas hacer?"<<endl;
        cout<<"1> Anadir Elementos a la lista"<<endl;
        cout<<"2> Eliminar elementos"<<endl;
        cout<<"3> Ordenar la lista"<<endl;
        cout<<"4> Imprimir lista"<<endl;
        cout << "5> Tamano de la lista" << endl;
        cout<<endl;
        cout<<"  > ";
        int op{0};
        cin >> op;
        switch (op)
        {
        case 1:
            ingresarN(listaM);
            break;
        case 2:
            eliminarN(listaM);
            break;
        case 3:
            ordenarL(listaM);
            break;
        case 4:
            listaM->print();
            break;
        case 5:
            cout << "\tTamano: " << listaM->tama() << endl;
            break;
        default:
            cout << "Valor invalido!" << endl;
            break;
        }
    }
    delete listaM;
    system("pause");
    return 0;
}
