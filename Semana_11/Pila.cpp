#include <iostream>
#include <ctime>

using namespace std;

class Nodo {
public:
    int data;
    Nodo* next;
};

class Pila{
public:
    Pila() {
        head = NULL;
    };
    ~Pila() {};
    int size();
    void push(int);;
    void pop();
    int ult();
    void print();
    bool be_inP(int);
    int pos(int);

private:
    Nodo* head;
};

int Pila::size(){
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
void Pila::push(int val) {
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
void Pila::pop(){
    if(head->next==NULL){
        head = NULL;
        return;
    }
    Nodo *temp = head, *temp2;
    while (temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
    delete temp;
}
int Pila::ult(){
    Nodo *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    return temp->data;
}
bool Pila::be_inP(int val){
    Nodo *temp = new Nodo();
    temp = head;
    int t = 0;
    while (t <= size()){
        if (temp->data==val){
            return true;
        }
        t++;
        temp = temp->next;
    } 
    return false;
}
int Pila::pos(int val){
    Nodo *temp =head;
    int t = 0;
    while (t <= size()){
        //cout << temp->data << " - ";
        if (temp->data==val){
            return t;
        }
        t++;
        temp = temp->next;
    } 
    return t;
};
void Pila::print() {
    if (head == NULL) {
        cout << "Pila vacia" << endl;
    }
    else {
        cout << "Pila -> ";
        Nodo* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;

        }
        cout << "NULL \n";
    }
}

int main(){
    Pila *PilaM = new Pila();
    PilaM->push(4);
    PilaM->push(14);
    PilaM->pop();
    PilaM->print();
    PilaM->pop();
    PilaM->print();

    /*
    cout << "---BIENVENIDO---";
    while (true){
        cout<<endl<<endl;
        cout << "-MENU-\n";
        cout<<"Que deseas hacer?"<<endl;
        cout<<"1> Anadir Elemento de la Pila"<<endl;
        cout<<"2> Eliminar elemento"<<endl;
        cout<<"3> Buscar elemento en la Pila"<<endl;
        cout<<"4> Imprimir Pila"<<endl;
        cout<<"5> Tamano de la Pila" << endl;
        cout<<endl;
        cout<<"  > ";
        int op{0};
        while(cin >> op){
            if (op==1){
                cout << "--INGRESANDO--\nCuantos nodos?:\n > ";
                int a{0},b{0};
                cin >> a;
                for (int i = 0; i < a;i++)
                {
                    cout << "Nodo #" << i + 1 << "\n > ";
                    cin >> b;
                    PilaM->push(b);
                }
                break;}
            if (op==2){
                cout << "--ELIMINANDO--\nCuantos nodos?:\n > ";
                int a{0};
                cin >> a;
                for (int i = 0; i < a;i++)
                    PilaM->pop();
                break;
            }
            if (op==3){
                cout << "--BUSCANDO--\nQue elemento busca?\n > ";
                int a{0};
                cin >> a;
                if(PilaM->be_inP(a)==true){
                    cout << " - " << a << ",  si esta en la pila " << PilaM->pos(a) + 1 << endl;
                    break;
                }
                cout << " - " << a << ", no esta en la Pila" << endl;
                break;}      
            if (op==4){
                PilaM->print();
                break;}
            if (op==5){
                cout << "\tTamano: " << PilaM->size() << endl;
                break;}
            else{
                cout << "OPCION NO VALIDA, INGRESE OTRO VALOR\n > ";
            }
        }
    }*/
    delete PilaM;
    system("pause");
    return 0;
}
