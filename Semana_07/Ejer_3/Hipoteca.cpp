#include "Hipoteca.h"

Hipoteca::Hipoteca(string nom, double sal, int num):Prestamo(nom, sal, num)
{
}

Hipoteca::~Hipoteca()
{
}
void Hipoteca::imprimir(){
    cout << "HIPOTECA: \n";
    ProductoBancario::imprimir();
    cout << "\n";
}