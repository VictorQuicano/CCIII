#ifndef ELIPSE_H
#define ELIPSE_H
#include "Forma.h"
#include <math.h>
#define _USE_MATH_DEFINES
#pragma once

class Elipse:public Forma
{
public:
    Elipse(double,double,string, int, int );
    ~Elipse();
    double getladoM() { return radioM; };
    double getladom() { return radiom; };
    virtual double area();
    virtual void imprimir();

private:
    double radioM;
    double radiom;
    string nombre{"Elipse"};
};

#endif