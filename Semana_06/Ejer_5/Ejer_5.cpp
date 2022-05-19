#include "matriz.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    matriz adivina(3,3);
    while (true){
        cout << "\n\n-MENU-\nQue desea hacer?\n1)Ver posicion de un dato\n2)Mostrar matriz\n > ";
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            adivina.buscar();
            break;
        case 2:
            adivina.mostrar();
            break;
        default:
            cout << " Valor no valido.";
            break;
        }
    }

}