#ifndef MATERIAL_H
#define MATERIAL_H
#include "iostream"
#pragma once
using namespace std;
class Material
{
public:
    Material(string);
    ~Material();
    string getMaterial() { return materia; };
    void setMateria(string);
    void mostrarM();

private:
    string materia;
};

#endif