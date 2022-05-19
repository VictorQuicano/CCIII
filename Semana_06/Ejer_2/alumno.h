#ifndef ALUMNO_H
#define ALUMNO_H

#pragma once

#include "string"
using namespace std;

class alumno
{
public:
    alumno(string,int, int, int,int);
    ~alumno();
    void mostrarA();
    float promedio(int, int, int); 
    bool aprobado(int, int, int);

private:
    int cui;
    int n1;
    int n2;
    int n3;
    string nombre;
};

#endif