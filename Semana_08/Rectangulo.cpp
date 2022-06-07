#include "Rectangulo.h"

Rectangulo::Rectangulo(double a, double b, string color, int x, int y):Forma(color, x,y)
{
    ladoM = a;
    ladom = b;
    setNombre(nombre);
}
Rectangulo::~Rectangulo()
{
}
double Rectangulo::area(){
    double areaC = ladoM * ladom;
    return areaC;
};
double Rectangulo::perimetro(){
    double perimetro = 2 * ladoM + 2 * ladom;
    return perimetro;
}
void Rectangulo::escalar(double a){
    ladoM *= a;
    ladom *= a;
}

void Rectangulo::imprimir(){
    cout << "-RECTANGULO-\n";
    Forma::mostrar();
    cout << "Medidas : " << ladoM << "u x " << ladom << "u\n";
    cout << "Area: " << area() << "\nPerimetro: " << perimetro();
    cout<<"\n\n";
}
