#include <iostream>
#include <string>
using namespace std;

int main(){
    string producto[3], apellido[3];
    int stock[3], precio[3];

    for (int i = 0; i < 3;i++){
        cout << "Ingrese producto de producto #"<<i+1<<": ";
        cin >> producto[i];
        cout << "Ingrese apellido de producto #"<<i+1<<": ";
        cin >> apellido[i];
        cout << "Ingrese precio de producto #"<<i+1<<": ";
        cin >> precio[i];
        cout << "Ingrese stock de producto #"<<i+1<<": ";
        cin >> stock[i];
        cout << "\n";
    }
    cout << "Mostrando datos:";
    for (int i = 0; i < 3;i++)
        cout << "\nproducto #"<<i+1<<"\n"<<producto[i] << " "<< apellido[i] << ". Tiene: "<< precio[i]<< ". Su stock es: "<< stock[i];
    return 0;
}