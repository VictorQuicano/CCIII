#ifndef FECHAS_H
#define FECHAS_H

#pragma once

class fechas
{
public:
    fechas(int, int, int);
    ~fechas();
    void compararF(fechas, fechas);
    int getanos() { return anos; };
    int getmes() { return meses; };
    int getdia() { return dias; };
private:
    int dias;
    int meses;
    int anos;
};

#endif