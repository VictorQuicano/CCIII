#ifndef CIRCULO_H
#define CIRCULO_H
#include "Elipse.h"
#pragma once

class Circulo:public Elipse
{
public:
    Circulo(double, string, int, int );
    ~Circulo();
    double area();
    void imprimir();

private:
    string nombre{"Circulo"};

};

#endif