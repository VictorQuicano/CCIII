#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "Prestamo.h"
using namespace std;
#pragma once

class Hipoteca:public Prestamo
{
public:
    Hipoteca(string, double, int);
    ~Hipoteca();
    void imprimir();
};

#endif