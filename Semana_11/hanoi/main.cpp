#include <iostream>
#include "Pila.h"

using namespace std;
int c = 1;
void printP(Pila *A){
    if(A->size()>0){
        int rows = A->ult(), space;
        for(int i = 1, k = 0; i <= rows; ++i, k = 0){
            for(space = 1; space <= rows-i; ++space){
                cout <<"  ";
            }
            while(k != 2*i-1){
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
        cout << "Torre " << A->get_name() << endl;
    }
    else{
        cout << "Torre " << A->get_name() <<", esta vacia. "<< endl;
    }
}

void separador(){
    for (int i = 0; i < 15;i++)
        cout << "-";
    cout << '\n';
}
void hanoi(int num, Pila *A, Pila *C, Pila *B){
    if(num==1){
        cout << "Iteracion #" << c << endl;
        cout << "-Antes-\n";
        printP(A);
        printP(C);
        cout << "\n\n";
        int n = A->ult();
        C->push(n);
        A->pop();
        cout <<"\nSe mueve la pieza #" << n << " de la torre "<<A->get_name()<<" a la torre "<<C->get_name()<<".\n ";
        cout << "-Despues-\n";
        printP(A);
        printP(C);
        c++;
        separador();
        cout << "\n\n";
        return;
    }
    else{
        hanoi((num-1), A,B, C);
        cout << "Iteracion #" << c << endl;
        cout << "-Antes-\n";
        printP(A);
        printP(C);
        cout << "\n\n";
        int n = A->ult();
        C->push(n);
        A->pop();
        cout <<"\nSe mueve la pieza #" << n << " de la torre "<<A->get_name()<<" a la torre "<<C->get_name()<<".\n ";
        cout << "-Despues-\n";
        printP(A);
        printP(C);
        c++;
        separador();
        cout << "\n\n";
        hanoi((num-1), B, C, A);
    }
}
int main(){
    cout << "Ingrese numero de fichas:\n > ";
    int a{0};
    cin >> a;
    Pila *pilaA = new Pila("A");
    Pila *pilaB = new Pila("B");
    Pila *pilaC = new Pila("C");
    for (int i =1; i <=a ;i++){
        pilaA->push(i);
    }
    cout << "---HANOI CON " << a << " FICHAS---" << endl;
    hanoi(a, pilaA, pilaC, pilaB);
    cout << "\n\n-Resultado-\n";
    printP(pilaA);
    printP(pilaB);
    printP(pilaC);
    delete pilaA;
    delete pilaB;
    delete pilaC;
    system("pause");
    return 0;
}