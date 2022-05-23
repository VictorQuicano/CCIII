#include "Alumno.h"
#include <iostream>

Alumno::Alumno(string _nombreA, int _edadA):Persona(_nombreA,_edadA){
}
Alumno::~Alumno(){

}
void Alumno::MostrarA()
{
    cout << "ALUMNO: \n";
    Mostrar();
}

void Alumno::setNombreA(string _nombreA){
    setNombre(_nombreA);
}
void Alumno::setEdadA(int _edadA){
    setEdad(_edadA);
}