#ifndef COLOR_H
#define COLOR_H

#pragma once

class Color
{
public:
    Color(int, int,int);
    ~Color();
    int getR() { return R; };
    int getG() { return G; };
    int getB() { return B; };
    void setColors(int, int, int);
    void mostrarC();

private:
    int R;
    int G;
    int B;
};

#endif