#include "Objeto.h"
#include "iostream"

using namespace std;

Objeto::Objeto(int r, int g, int b, string materia, string _nombre):Color(r,g,b),Material(materia)
{
    nombre = _nombre;
}


Objeto::~Objeto(){
}
void Objeto::mostrar(){
    cout << nombre << ":\n-Color: ";
    mostrarC();
    cout << "\n";
    mostrarM();
    cout << "\n";
}
