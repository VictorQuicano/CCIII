#include "Correo.h"
#include "iostream"

using namespace std;

int main(){
    string nombre, apellido;
    char *nom;
    cout << "Ingrese su nombre: \n>";
    cin >> nombre;
    nom = &nombre[0];
    cout << "Ingrese su nombre: \n>";
    cin >> apellido;

    Correo<char, string> c1(nom, apellido);
    cout << "Correo nuevo = ";
    c1.imprimir();
    cout<< endl;
    system("pause");
    return 0;
}