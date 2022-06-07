#include "Forma.h"


Forma::Forma(string col, int a, int b):Punto(a,b){
    Color = col;
}
Forma::~Forma(){
}
void Forma::setColor(string Col){
    Color = Col;
}
void Forma::setPunto(int a, int b){
    Punto::setCoordenadas(a, b);
}
void Forma::setNombre(string name){
    nombre = name;
}
void Forma::mostrar(){
    cout << "Tipo: " << nombre << "\nCoordenada - ";
    mostrarC();
    cout << "Color: " << Color<<'\n';
}
void Forma::imprimir(){
    cout << "Go!?\n";
}