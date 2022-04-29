#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int i, a, max{0}, min{10000000};
    double sum = 0;
    cout << "Ingrese cantidad de numeros" << endl;
    cin >> i;
    for (int b = 0; b < i; b++){
        cout<<b+1<<") ";
        cin >> a;
        sum += a;
        if (a> max)
            max = a;
        if (a < min)
            min = a;
    }
    cout << "El maximo valor inngresado es " << max << "\nEl menor es " << min << "\n El promedio es " << sum / i;
}   