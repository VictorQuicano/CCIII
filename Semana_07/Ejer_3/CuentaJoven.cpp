#include "CuentaJoven.h"

CuentaJoven::CuentaJoven(string nom, double sal, int num):Cuenta(nom, sal, num)
{
}

CuentaJoven::~CuentaJoven()
{

}
void CuentaJoven::imprimir(){
    cout << "CUENTA JOVEN:\n";
    ProductoBancario::imprimir();
    cout << "\n";
}