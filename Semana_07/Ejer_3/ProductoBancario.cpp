#include "ProductoBancario.h"
#include "iostream"
using namespace std;

ProductoBancario::ProductoBancario(string nombre, double _S, int num)
{
    cliente = nombre;
    saldo = _S;
    NumProductos = num;
}

ProductoBancario::~ProductoBancario()
{

}

void ProductoBancario::imprimir(){
    cout << "Nombre: " << cliente << "\nSaldo: " << saldo << "\nNumero de Productos: " << NumProductos << '\n';
}