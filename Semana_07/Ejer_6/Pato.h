#ifndef Pato_H
#define Pato_H
#include "Ave.h"
#include "iostream"
#pragma once
using namespace std;

class Pato:public Ave
{
public:
    Pato(string);
    ~Pato();
    void llamame();
private:
    string especie {"Pato"};
};

#endif