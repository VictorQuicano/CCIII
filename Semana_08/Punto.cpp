#include "Punto.h"

Punto::Punto(int a, int b)
{
    x = a;
    y = b;
}

Punto::~Punto()
{

}
void Punto::setCoordenadas(int a, int b)
{
    x = a;
    y = b;
}
void Punto::mostrarC(){
    std::cout << "Posicion:\n *" << x << " X\n *" << y << "Y\n";
}