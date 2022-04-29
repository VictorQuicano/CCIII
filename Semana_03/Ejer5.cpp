#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;


void validar(int);
int suma(int);


int main(){
    cout << "Ingresa un numero: ";
    int a{0};
    cin >> a;
    validar(a);

    cout << "La suma de los numeros impares desde 0 hasta " << a << "\nEs igual a: " << suma(a);
}

void validar(int a){
    if (a%2==0){
        cout << "Si es par, podemos continuar\n";
    }
    else{
        cout << "Es impar, vuelve a intentar\n";
        main();
    }
}
int suma (int a){
    int resultado{0};
    for (int i = 1; i <= a;i+=2)
        resultado += i;
    return resultado;
}