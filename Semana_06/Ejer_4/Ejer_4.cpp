#include "iostream"
#include "lista.h"

using namespace std;
int main(){
    int a;
    cout << "Cuantos elementos tendra su arreglo?\n >";
    cin >> a;
    lista l1(a);
    while(true){
        cout << "\n\n-MENU-\nQue deseas hacer?\n1) Llenar la lista\n2) Anadir elemento\n3) Quitar elemento\n4) Esta llena\n5) Mostrar lista\n >";
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            l1.llenar();
            break;
        case 2:
            l1.anadir();
            break;
        case 3:
            l1.quitar();
            break;
        case 4:
            l1.estallena();
            break;
        case 5:
            l1.mostrar();
            break;
        default:
            cout << "Valor ingresado, no  es valido\n";
            break;
        }
    }
}