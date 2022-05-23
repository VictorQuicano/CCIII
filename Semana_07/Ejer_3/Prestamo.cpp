#include "Prestamo.h"

Prestamo::Prestamo(string nom, double sal, int num):ProductoBancario(nom, sal, num)
{
}

Prestamo::~Prestamo()
{
}

void Prestamo::imprimir(){
    cout << "PRESTAMO: \n";
    ProductoBancario::imprimir();
    cout << "\n";
}