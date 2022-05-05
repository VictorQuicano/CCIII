#include <iostream>
#include <string>
using namespace std;


int main()
{
    int num[5][3];
    for (int i = 0; i<5; i++){
        cout << "Ingrese datos de fila #" << i + 1 << ":\n";
        for (int j = 0; j < 3;j++){
            cout << j + 1 << ") ";
            cin >> num[i][j];
        }
    }

    for (int i = 0; i<5; i++){
        cout << "Datos de fila #" << i + 1 << ":\n";
        for (int j = 0; j < 3;j++){
            cout << num[i][j]<<", ";
        }
        cout << '\n';
    }

    for (int i = 1; i<5; i+=2){
        int sum_f{0};
        cout << "Suma de los datos de la fila#" << i + 1 << ":";
        for (int j = 0; j < 3;j++){
            sum_f+= num[i][j];
        }
        cout << sum_f<<'\n';
    }

}