#include <iostream>
#include <string>
using namespace std;

bool busca_num(int a[], int tamano, int b){
    for (int i = 0; i < tamano;i++){
        if (a[i]==b){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    int num[8],com{0};
    cout << "Ingrese 8 numeros:\n";
    for (int i = 0; i < 8;i++){
        cout << i+1 <<") ";
        cin >> num[i];
    }
    cout << "Buscar numero:";
    cin >> com;
    if (busca_num(num, 8, com)==true)
        cout << com << " si esta en en el arrreglo";
    else
        cout << com << " no esta en el arreglo";
}