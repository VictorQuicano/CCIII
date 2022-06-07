#ifndef OPERA_H
#define OPERA_H
#include "iostream"
#include "cstring"
#include <string>
#pragma once

using namespace std;

template <class T, class P>
class Correo{
private:
    T* nom;
    P ape;
public:
    Correo(T *nom, P ape);
    void imprimir();
};

template <class T, class P>
Correo<T, P>::Correo(T *nom, P ape){
    this->nom = nom;
    this->ape = ape;
}
template <class T, class P>
void Correo<T, P>::imprimir(){
    int longx = strlen(nom);
    for(int i = 0;i<longx;i++)
        cout<<*(nom+i);
    cout << ape << "@gmail.com" << endl;
}
#endif