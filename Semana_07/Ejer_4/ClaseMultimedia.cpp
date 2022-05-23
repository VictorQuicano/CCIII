#include "ClaseMultimedia.h"

ClaseMultimedia::ClaseMultimedia(string ti, double num)
{
    tipo = ti;
    peso = num;
}

ClaseMultimedia::~ClaseMultimedia()
{
}

void ClaseMultimedia::imprimir(){
    cout << "-Multimedia de tipo: " << tipo << "\n-Peso: " << peso << "Gb/s\n";
}