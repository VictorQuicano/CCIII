#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;
int potencia(int a, int b){
    int c{1};
    for (int i = 1; i <= b ; i++)
        c *= a;
    return c;
}

int main(){
    cout << "Ingrese Un numero: ";
    int a, b;
    cin >> a;
    cout << "Ingrese a que potencia: ";
    cin >> b;
    cout << "La potencia es " << potencia(a, b);
}