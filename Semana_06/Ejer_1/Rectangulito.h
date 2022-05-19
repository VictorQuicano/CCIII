#ifndef RECTANGULITO_H
#define RECTANGULITO_H

#pragma once
#include <iostream>
using namespace std;
class Rectangulito
{

private:
    int base;
    int altura;

public:
    Rectangulito(int base, int altura);
    ~Rectangulito();
    void area();
    void perimetro();
};

#endif