#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "iostream"
#include "operacionBase.h"
#pragma once
using namespace std;

class operacionFactorial:public operacionBase
{
public:
    void setOperator();
    int getOperator();
    int devolverFactorial();
    
};

#endif