#include "Cuadrado.h"


Cuadrado::Cuadrado(double a, string color, int x, int y):Rectangulo(a,a, color, x,y)
{
    setNombre(nombre);
}
Cuadrado::~Cuadrado()
{
}
/*auto Cuadrado::area(){
    
    return Rectangulo::area();
};
auto Cuadrado::perimetro(){
    return Rectangulo::perimetro();
}
*/

void Cuadrado::imprimir(){
    cout << "-CUADRADO-\n";
    Forma::mostrar();
    cout << "Medidas : " << Rectangulo::getLadoM()<< "u";
    cout << "\nArea: " << Rectangulo::area() << "\nPerimetro: " << Rectangulo::perimetro();
    cout<<"\n\n";
}
