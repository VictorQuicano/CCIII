#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include "ClaseMultimedia.h"
#include "iostream"
using namespace std;
#pragma once

class ClaseDisco:public ClaseMultimedia
{
public:
    ClaseDisco(string, int, string, double);
    ~ClaseDisco();
    void imprimirD();

private:
    string Nombre_D;
    int num_Archivos;
};

#endif