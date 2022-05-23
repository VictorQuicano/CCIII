#include <iostream>
#include "Alumno.h"
using namespace std;
int main(){
    Alumno Pancho("Pancho Pistolas", 20);
    Pancho.MostrarA();
    Pancho.setNombre("Francisco Rifles");
    Pancho.setEdad(21);
    Pancho.MostrarA();
    system("pause");
    return 0;
}