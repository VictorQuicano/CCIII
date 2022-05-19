#include "fechas.h"
#include <iostream>

using namespace std;

fechas::fechas(int _dias, int _meses, int _anos)
{
    dias = _dias;
    meses = _meses;
    anos = _anos;
}

fechas::~fechas()
{

}
void fechas::compararF (fechas f1, fechas f2){
    //fecha actual obtenemos datos y usamos temporales
    int a{f1.getdia()};
    int b{f1.getmes()};
    int c{f1.getanos()};

    //fecha nacimiento obtenemos datos y usamos  temporales
    int a1{f2.getdia()};
    int b1{f2.getmes()};
    int c1{f2.getanos()};
    int edad{0}, mes{0}, dia{0};
    
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