#ifndef OBJETO_H
#define OBJETO_H
#include "iostream"
#include "Color.h"
#include "Material.h"

#pragma once
using namespace std;

class Objeto:public Color, public Material
{
public:
    Objeto(int, int, int, string, string);
    ~Objeto();
    void mostrar();

private:
    string nombre;
};

#endif