#include <iostream>
#include "Persona.h"
using namespace std;
Persona::Persona(string _a, int _e)
{
    nombre = _a;
    edad = _e;
}

Persona::~Persona()
{
}

void Persona::Mostrar(){
    cout << "Nombre: " << nombre << "\nEdad: " << edad<<'\n';
}