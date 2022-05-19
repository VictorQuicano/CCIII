#include "alumno.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

alumno::alumno(string _nombre,int _cui, int _n1, int _n2,int _n3){
    nombre = _nombre;
    cui = _cui;
    n1 = _n1;
    n2 = _n2;
    n3 = _n3;
}

alumno::~alumno(){
}

void alumno::mostrarA(){
    cout << "Nombre: " << nombre << "\nCUI: " << cui << "\nNOTAS:\n- " << n1 << "\n- " << n2 << "\n- " << n3 <<"\n >"<<nombre<<", esta ";
    if (aprobado(n1,n2,n3)==true){
        cout << "APRODADO ";
    }
    else
        cout<< "DESAPRODADO ";
    cout <<"con nota promedio " <<promedio(n1,n2,n3)<<"\n\n";
}

float alumno::promedio(int n1, int n2, int n3){
    n1 += n2;
    n1 += n3;
    float prom = n1 * 1.0 / 3;
    return prom;
}

bool alumno::aprobado(int n1, int n2, int n3){
    if (promedio(n1,n2,n3)>=10.5){
        return true;
    }
    else
        return false;
}