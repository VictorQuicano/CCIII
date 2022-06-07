#ifndef TRIO_H
#define TRIO_H
#include "iostream"
#pragma once

using namespace std;

template <class T>
class Trio
{
public:
    Trio (T x = 0, T y = 0, T z = 0);
    T getMax();
    T getMin();
private:
    T x;
    T y;
    T z;
};

template <class T>
Trio<T>::Trio(T x, T y, T z){
    this->x = x;
    this->y = y;
    this->z = z;
}
template <class T>
T Trio<T>::getMax(){
    if (x>=y && x>=z)
        return x;
    if (y>=z && y>=x)
        return y;
    return z;
}
template <class T>
T Trio<T>::getMin(){
    if (x<=y && x<=z)
        return x;
    if (y<=z && y<=x)
        return y;
    return z;
}

#endif