#include "iostream"
#include "Color.h"
using namespace std;

Color::Color(int _R, int _G, int _B)
{
    R = _R;
    G = _G;
    B = _B;
}

Color::~Color()
{
}

void Color::setColors(int _R, int _G, int _B)
{
    R = _R;
    G = _G;
    B = _B;
}
void Color :: mostrarC()
{
    cout << "# " << R << ' ' << G << ' ' << B << ' ';
}