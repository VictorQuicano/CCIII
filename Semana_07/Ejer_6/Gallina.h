#ifndef Gallina_H
#define Gallina_H
#include "Ave.h"
#include "iostream"
#pragma once
using namespace std;

class Gallina:public Ave
{
public:
    Gallina(string);
    ~Gallina();
    void llamame();
private:
    string especie{"gallina"};
};

#endif