#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){

    int horas[2], ad;
    cout<<"Ingrese la hora:"<<endl;
    cin>>horas[0];
    cout<<"Ingrese los minutos:"<<endl;
    cin>>horas[1];

    cout<<"Cuanto tiempo (en minutos) agregamos"<<endl;
    cin>>ad;

    horas[1]+=ad;

    if (horas[1]>=60){
        horas[0]+=(horas[1]/60);
        horas[1]=horas[1]%60;
    }

    if (horas[0]>12){
        horas[0]-=12;
        cout<<"Son las "<<horas[0]<<":"<<horas[1]<<"PM"<<endl;
    }
    else{
        cout<<"Son las "<<horas[0]<<":"<<horas[1]<<"AM"<<endl;
    }
}