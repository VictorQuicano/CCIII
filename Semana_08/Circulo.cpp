#include "Circulo.h"


Circulo::Circulo(double r, string color, int x, int y):Elipse(r*2,r*2, color, x,y)
{
    setNombre(nombre);
}
Circulo::~Circulo()
{
}
double Circulo::area(){
    double areaC = M_PI * pow((getladoM() / 2), 2);
    return areaC;
}

void Circulo::imprimir(){
    cout << "-CIRCULO-\n";
    Forma::mostrar();
    cout << "radio : " << Elipse::getladoM()<< "u";
    cout << "\nArea: " << area();
    cout << "\n\n";
}
