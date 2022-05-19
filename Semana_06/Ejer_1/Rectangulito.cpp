#include "Rectangulito.h"
#include "iostream"

using namespace std;


Rectangulito::Rectangulito(int _base, int _altura)
{
    base = _base;
    altura= _altura;
}

Rectangulito::~Rectangulito()
{
}

void Rectangulito::area(){
    cout << "El area del cuadrado es " << base * altura << '\n';
}

void Rectangulito::perimetro(){
    cout << "El perimetro del cuadrado es " << (2 * base) + (2*altura) << '\n';
}