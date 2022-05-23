#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H
#include "iostream"
using namespace std;
#pragma once

class operacionBase
{
public:
    void setOperator();
    int getOperator();

private:
    int operador;
};

#endif