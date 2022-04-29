#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
   string nom, apeP, apeM;
    cout<<"Ingrese su primer nombre: "<<endl;
    cin>>nom;
    cout<<"Ingrese su apellido  paterno: "<<endl;
    cin>>apeP;
    cout<<"Ingrese su apellido  materno: "<<endl;
    cin>>apeM;
    cout<<"Su correo UNSA: "<<nom[0]<<apeP<<apeM[0]<<"@unsa.edu.pe"<<endl;
}