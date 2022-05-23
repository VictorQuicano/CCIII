#include "iostream"
#include "operacionFactorial.h"

using namespace std;
int main(){
    operacionFactorial op;
    op.setOperator();
    cout << "Factorial de " << op.getOperator() << ": " << op.devolverFactorial()<<'\n';
    system("pause");
    return 0;
}