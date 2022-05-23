#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
#include "iostream"
#include "string"

#pragma once
using namespace std;

class Alumno:public Persona
{
private:
    string nombreA;
    int edadA;

public:
    Alumno(string, int);
    ~Alumno();
    void MostrarA();
    void setNombreA(string);
    void setEdadA(int);
};

#endif