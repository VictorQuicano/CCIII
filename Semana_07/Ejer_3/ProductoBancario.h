#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include "string"

#pragma once

using namespace std;
class ProductoBancario
{
public:
    ProductoBancario(string, double, int);
    ~ProductoBancario();
    void imprimir();

private:
    string cliente;
    double saldo;
    int NumProductos;
};

#endif