#ifndef MATRIZ_H
#define MATRIZ_H

#pragma once

class matriz
{
public:
    matriz(int,int);
    ~matriz();
    void buscar();
    void mostrar();

private:
    int** per3;
};

#endif