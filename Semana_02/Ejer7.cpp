#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int a{0};
    cout << "Cuantos alumnos tienes?\n";
    cin >> a;
    for (int i = 0; i < a;i++){
        float b{0};
        cout << "Notas del alumno " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++){
            int c;
            cout << j + 1 << ") ";
            cin >> c;
            b += c;
        }
        cout << "Promedio del alumno " << i + 1 << ":\n"
             << b / 3<<"\n\n";
    }
}   