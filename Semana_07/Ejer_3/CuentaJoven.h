#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H
#include "Cuenta.h"
#include <iostream>
using namespace std;
#pragma once

class CuentaJoven:private Cuenta
{
public:
    CuentaJoven(string,  double, int);
    ~CuentaJoven();
    virtual void imprimir();
};

#endif