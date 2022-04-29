#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

void CalculaEdad (int a, int b, int c, int a1, int b1, int c1){
    int edad, mes, dia;
    if (a1>a){
        a += 30;
        b -= 1;
        dia = a - a1;
    }
    else
        dia = a - a1;
    if (b1>b){
        b += 12;
        c -= 1;
        mes = b - b1;
    }
    else
        mes = b - b1;

    edad = c - c1;

    cout << "Tienes " << edad << " años, " << mes << " meses y "<<dia;
    if (dia>=2)
        cout << " dias";
    else
        cout << " dia";
}

int main(){
    cout << "Ingrese fecha actual (Ejemplo 28-04-2022): ";
    int a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;
    cout << "Ingrese fecha de nacimiento (Ejemplo 28-12-2001): ";
    int a1, b1, c1;
    cin >> a1 >> x >> b1 >> y >> c1;
    CalculaEdad(a, b, c, a1, b1, c1);

    return 0;    
}