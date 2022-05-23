#ifndef AVE_H
#define AVE_H
#include "iostream"

using namespace std;
#pragma once

class Ave
{
public:
    Ave(string);
    ~Ave();
    int getPatas() { return patas; };
    string getNombre() { return nombre; };
    string getEspecie() { return especie; };
    void setEspecie(string);
    void llamame();

private:
    int patas{2};
    string nombre;
    string especie;
};

#endif