#include "ClaseDisco.h"

ClaseDisco::ClaseDisco(string nom, int num, string tipo, double peso):ClaseMultimedia(tipo, peso)
{
    Nombre_D = nom;
    num_Archivos = num;
}

ClaseDisco::~ClaseDisco()
{

}

void ClaseDisco::imprimirD(){
    cout << Nombre_D << " - EL DISCO\n-Numero de archivos: " << num_Archivos << "\n";
    imprimir();
}