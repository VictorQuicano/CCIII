#include <iostream>
#include <string>

using namespace std;

int main(){
    string contrasena{"No me introdujiste nada"}, valida{"0"};
    cout << "Introduce tu Primera Contrasena: \n";
    cin >> contrasena;
    cout << "Introduce valida la contrasena: \n";
    cin >> valida;

    while (valida!=contrasena){
        cout << "Las contrasenas no son iguales. Vuelve a intentar.\n\n";
        cin >> valida;
    }
    cout << "Son iguales. Muy bien hecho";
}