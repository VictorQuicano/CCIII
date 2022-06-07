#ifndef FORMA_H
#define FORMA_H
#include "Punto.h"
#include "iostream"
using namespace std;
#pragma once

class Forma:public Punto
{
public:
    Forma(string, int, int);
    ~Forma();
    string getColor() { return Color; };
    string getNombre() { return nombre; };
    void setColor(string);
    void setPunto(int, int);
    void setNombre(string);
    virtual void imprimir();
    void mostrar();
    virtual double area() { return 0; };

private:
    string Color;
    string nombre{"Forma"};
};

#endif