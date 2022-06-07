#ifndef CUADRADO_H
#define CUADRADO_H
#include "Rectangulo.h"
#pragma once

class Cuadrado:public Rectangulo
{
public:
    Cuadrado(double, string, int, int );
    ~Cuadrado();
    /*auto area();
    auto perimetro();*/
    void imprimir();

private:
    string nombre{"Cuadrado"};
};

#endif