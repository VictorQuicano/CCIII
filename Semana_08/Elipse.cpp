#include "Elipse.h"


Elipse::Elipse(double a, double b, string color, int x, int y):Forma(color, x,y)
{
    radioM = a;
    radiom = b;
    setNombre(nombre);
}
Elipse::~Elipse()
{
}
double Elipse::area(){
    auto areaC = M_PI*radioM * radiom;
    return areaC;
};

void Elipse::imprimir(){
    cout << "-ELIPSE-\n";
    Forma::mostrar();
    cout << "Medidas : \n-Radio Mayor: " << radioM << "u\n-Radio Menor " << radiom << "u\n";
    cout << "Area: " << area() << "\n\n";
}