#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H
#include "iostream"

using namespace std;
#pragma once

class ClaseMultimedia
{
public:
    ClaseMultimedia(string, double);
    ~ClaseMultimedia();
    void imprimir();

private:
    string tipo;
    int peso;
};

#endif