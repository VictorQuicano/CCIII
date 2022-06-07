#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"
#include "iostream"
using namespace std;
#pragma once

class Rectangulo:public Forma
{
public:
    Rectangulo(double,double,string, int, int );
    ~Rectangulo();
    double getLadoM() { return ladoM; };
    double getLadom() { return ladom; };
    double area();
    double perimetro();
    void escalar(double);
    virtual void imprimir();

private:
    double ladoM;
    double ladom;
    string nombre{"Rectangulo"};

};

#endif