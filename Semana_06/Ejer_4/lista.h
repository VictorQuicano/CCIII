#ifndef LISTA_H
#define LISTA_H

#pragma once
#include "iostream"
using namespace std;

class lista
{
private:
    int n;
    int* p;
    int c{0};

public :
    lista(int);
    ~lista();
    void llenar();
    void anadir();
    void estallena();
    void quitar();
    void mostrar();
};

#endif