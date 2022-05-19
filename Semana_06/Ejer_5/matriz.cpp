#include "matriz.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
bool revisa(int *n, int rando){
    for(int i=0; i<10; i++)
        if(rando == n[i])
            return true;
    return false;
}
matriz::matriz(int f, int co)
{
    int *n = new int[9];
    int rando;
    srand(time(NULL));
    for (int i = 0; i < 9;i++){
        do
            rando = rand() % 9 +1;
        while (revisa(n, rando));
        n[i] = rando;
    }
    per3 = new int *[f];
    int c{0};
    for (int i = 0; i < co; i++)
    {
        per3[i] = new int[3];
        for (int j = 0; j < 3;j++){
            per3[i][j] = n[c];
            c++;
        }
    }
}
matriz::~matriz()
{
}
void matriz::buscar(){
    int a{0};
    cout << "Ingrese un valor a bsucar\n >";
    cin >> a;
    while (true){
        if (a<=0||a>9){
            cout << "El valor ingresado no es valido, vuelve a intentar.\n >";
            cin >> a;
        }
        else
            break;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (per3[i][j] == a) 
            {
                std::cout <<'\n' <<a << " esta en la columna " << j + 1 << ", fila " << i + 1 << ".\n";
                return;
            }
        }
        }
}
void matriz::mostrar(){
    cout << "-LA MATRIZ-\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            cout << per3[i][j] << " ";
        }
        cout << "\n";
    }
}