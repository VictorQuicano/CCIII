#include <iostream>
#include <string>

using namespace std;

int main(){
    int ing{0}, x{0};
    cout << "Cuantos numeros vas a ingresar?\n";
    cin >> ing;
    float sum;
    for (int i = 1; i <= ing;i++){
        cout << i << " Elemento: \n";
        cin >> x;
        sum += x;
    }
    cout << "La media es " << sum / ing;
}   