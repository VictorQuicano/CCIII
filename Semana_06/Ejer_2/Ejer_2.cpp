#include "alumno.h"
#include <iostream>

using namespace std;

int main(){
    alumno a1 = alumno("Silvia", 20196475, 13, 12, 10);
    alumno a2 = alumno("Alejandro", 20203485, 11, 10, 9);
    alumno a3 = alumno("Camila", 20184354, 8, 9, 2);
    a1.mostrarA();
    a2.mostrarA();
    a3.mostrarA();
    system("pause");
    return 0;
}