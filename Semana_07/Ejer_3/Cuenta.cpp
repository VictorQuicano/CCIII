#include "Cuenta.h"

Cuenta::Cuenta(string _nombre, double _saldo, int _num):ProductoBancario(_nombre,_saldo,_num)
{

}

Cuenta::~Cuenta()
{

}
void Cuenta::imprimir(){
    cout << "CUENTA:\n";
    ProductoBancario::imprimir();
    cout << "\n";
}