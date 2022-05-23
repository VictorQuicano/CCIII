#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "ProductoBancario.h"
#include "iostream"

using namespace std;
#pragma once
 
class Prestamo:protected ProductoBancario
{
public:
    Prestamo(string, double, int);
    ~Prestamo();
    void imprimir();
};

#endif