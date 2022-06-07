#ifndef MAXMIN_H
#define MAXMIN_H
#include "iostream"
#pragma once

using namespace std;

template <class T>
class Maxmin{
private:
    T* x;
    int t;

public:
    Maxmin(T *x , int t);
    T maximo();
    T min();
};

template <class T>
Maxmin<T>::Maxmin(T *x, int t){
    this->x = x;
    this->t = t;
}
template <class T>
T Maxmin <T>::maximo(){
    T max = *x;
    for(int i = 1;i<t;i++){
        if(max<*(x+i))
            max = *(x + i);
    }
    return max;
}
template <class T>
T Maxmin <T>::min(){
    T mini = *x;
    for(int i = 1;i<t;i++){
        if(mini>*(x+i))
            mini = *(x + i);
    }
    return mini;
}

#endif