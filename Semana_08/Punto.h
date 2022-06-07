#ifndef PUNTO_H
#define PUNTO_H
#include "iostream"
#pragma once

class Punto
{
public:
    Punto(int, int);
    ~Punto();
    void setCoordenadas(int, int);
    int Xcoo() { return x; };
    int Ycoo() { return y; };
    void mostrarC();

private:
    int x;
    int y;
};

#endif