#include<iostream>
#include <string>
#include <ctime>

using namespace std;

struct nodo{
    int dato;
    nodo* siguiente;
    nodo* atras;
} *primero, *ultimo;

void insertarNodo(int a){
    nodo* nuevo = new nodo;

    nuevo->dato = a;

    if(primero == NULL){
        primero = nuevo;
        primero -> siguiente = NULL;
        primero -> atras = NULL;
        ultimo = primero;
    }
    else{
        ultimo -> siguiente = nuevo;
        nuevo -> siguiente = NULL;
        nuevo -> atras =ultimo;
        ultimo = nuevo;
    }

}

void printList(struct nodo *actual_2){
    nodo* actual = actual_2;

    actual = primero;

    if(primero != NULL){

        while(actual != NULL){
            cout<<" "<<actual -> dato;
            actual = actual ->siguiente;
        }
    }else{
        cout<< "La lista se encuentra vacia";
    }
}
   
void ordenar(){
		nodo *aux = primero;
		int temp;
		while(aux -> siguiente != NULL){
			nodo *aux2 = aux -> siguiente;
			while(aux2 != NULL){
				if(aux2 -> dato < aux -> dato){
					temp = aux2 -> dato;
					aux2 -> dato = aux -> dato;
					aux -> dato = temp;
				}

				aux2 = aux2 -> siguiente;
			}
			aux = aux -> siguiente;
			aux2 = aux -> siguiente;
		}
}
void insertaNODO(){
    cout << "Ingrese un valor entero a ingresar: \n >";
    int entra{0};
    cin >> entra;
    insertarNodo(entra);
    
    cout << "Nodo ingresado\n\n";
    ordenar();
}
int main(){

    struct nodo *actual_2;
    srand(time(NULL));
    for (int i = 0; i < 10000;i++)
        insertarNodo(rand()%(100000-1));
    
    cout<<"\n lista:\n\n ";
    printList(actual_2);

    ordenar();

    cout<<"\n lista ordenada:\n\n ";
    printList(actual_2);
    while (true)
    {
        cout << "\n-MENU-\n Que desea hacer?\n1) Insertar nuevo Elemento\n2)Mostrar lista\n >";
        int op = {0};
        while (true){
            cin >> op;
            if (op>2)
                cout << "Valor no valido, vuelve a intentar\n >";
            else
                break;
        }
        switch (op)
        {
            case 1:
                insertaNODO();
                break;
            case 2:
                printList(actual_2);
                break;
        }
    }
    return 0;
}