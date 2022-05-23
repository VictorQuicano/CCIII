#include "operacionBase.h"

void operacionBase::setOperator(){
    int a;
    cout << "Ingrese un numero:\n >";
    cin >> a;
    operador = a;
}

int operacionBase::getOperator(){
    return operador;
}