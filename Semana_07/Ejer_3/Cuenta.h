#ifndef CUENTA_H
#define CUENTA_H
#include "ProductoBancario.h"
#include "iostream"
using namespace std;
#pragma once

class Cuenta : public ProductoBancario
{
public:
    Cuenta(string, double, int);
    ~Cuenta();
    virtual void imprimir();
};

#endif