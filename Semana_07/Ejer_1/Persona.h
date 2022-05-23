#ifndef PERSONA_H
#define PERSONA_H
#include "iostream"

#pragma once
using namespace std;

class Persona
{
public:
    Persona(string, int);
    ~Persona();
    string getNombre() { return nombre; };
    int getEdad() { return edad; };
    void Mostrar();
    void setNombre(string a) { nombre = a; };
    void setEdad(int a) { edad = a; };

private:
    int edad;
    string nombre;
};

#endif