#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int a{0},b{0};
    cout << "Introduce el numero que desees:\n";
    cin >> a;
    cout << "Hasta que numero deseas multiplicarlo?:\n";
    cin >> b;
    for (int i = 0; i <= b;i++)
        cout << a << " x " << i << " = " << a * i<<'\n';
}   