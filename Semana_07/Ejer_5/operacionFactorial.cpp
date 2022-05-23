#include "operacionFactorial.h"
int facto(int a){
    if (a==1){
        return a;
    }
    else
        return (a * facto(a - 1));
}

void operacionFactorial::setOperator(){
    operacionBase::setOperator();
}
int operacionFactorial::getOperator(){
    operacionBase::getOperator();
}
int operacionFactorial::devolverFactorial(){
    int a = operacionBase::getOperator();
    return facto(a);
}

