#include <iostream>

using namespace std;
int main(){
    int almacena[3][3];
    int f_almacena[3];
    for (int i = 0; i<3; i++){
        cout << "Ingrese datos de fila #" << i + 1 << ":\n";
        for (int j = 0; j < 3;j++){
            cout << j + 1 << ") ";
            cin >> almacena[i][j];
        }
    }

    for (int i = 0; i<3; i++){
        int suma{0};
        for (int j = 0; j < 3;j++){
            suma+= almacena[i][j];
        }
        f_almacena[i] = suma;
    }
    int may{f_almacena[0]};
    for (int i = 1; i < 3;i++)
        if (f_almacena[i]>may)
            may = f_almacena[i];

    cout << "De la suma de cada fila, el mayor es " << may;
}