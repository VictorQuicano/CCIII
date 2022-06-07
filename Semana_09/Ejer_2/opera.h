#ifndef OPERA_H
#define OPERA_H
#include "iostream"
#pragma once

using namespace std;

template <class T>
class Opera
{
public:
    Opera (T x = 0, T y = 0);
    T sum();
    T rest();
    T div();
    T mul();
    T getX() { return x; };
    T gety() { return y; };

private:
    T x;
    T y;
};

template <class T>
Opera<T>::Opera(T x, T y){
    this->x = x;
    this->y = y;
}
template <class T>
T Opera<T>::sum(){
    return (x + y);
}
template <class T>
T Opera<T>::rest(){
    return (x - y);
}
template <class T>
T Opera<T>::div(){
    return (x /y);
}
template <class T>
T Opera<T>::mul(){
    return (x * y);
}
#endif