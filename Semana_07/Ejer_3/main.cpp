#include "iostream"
#include "CuentaJoven.h"
#include "Hipoteca.h"

using namespace std;
int main(){
    Cuenta Fran("Francisco", 446.6, 2);
    CuentaJoven Ale("Alejandra", 1.3, 1);
    Prestamo Pedro("Pedro", 3253.2, 3);
    Hipoteca Maria("Marialuz", 2002, 4);

    Fran.imprimir();
    Ale.imprimir();
    Pedro.imprimir();
    Maria.imprimir();
    system("pause");
    return 0;
}