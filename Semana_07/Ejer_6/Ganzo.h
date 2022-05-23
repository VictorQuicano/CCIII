#ifndef Ganzo_H
#define Ganzo_H
#include "Ave.h"
#include "iostream"
#pragma once
using namespace std;

class Ganzo:public Ave
{
public:
    Ganzo(string);
    ~Ganzo();
    void llamame();
private:
    string especie{"Ganzo"};
};

#endif