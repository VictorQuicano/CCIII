#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;
#pragma once

class Nodo {
public:
    int data;
    Nodo* next;
};

class Pila{
public:
    Pila(string);
    ~Pila();
    int size();
    void push(int);
    void pop();
    int ult();
    void print();
    bool be_inP(int);
    int pos(int);
    string get_name() { return name; };
private:
    Nodo* head;
    int tam = 0;
    string name{};
};
#endif