#include <iostream>
#include <vector>
using namespace std;
struct jugador{
    string nombre;

    int edad{0};
    double talla{0};
};
jugador crear_A(string n,int edad, double talla){
    jugador temp;
    temp.nombre = n;
    temp.edad = edad;
    temp.talla = talla;
    return temp;
}

void mostrar_J(jugador a1){
    cout << a1.nombre << " tiene "<<a1.edad<<"\n TALLA: "<<a1.talla<<endl;
}
//Funciones del menu
void anadir(vector<jugador> *compa){
    cout << "Cuantos jugadors ingresara?\n >";
    int a{0};
    cin >> a;
    for (double i = 0; i < a;i++){
        cout << "\n";
        cout << "Jugador #" << i + 1<<":\n";
        string n;
        int edad;
        double talla;
        cout << " -Ingresar nombre: ";
        cin>> n;
        cout << " -Ingresar edad: ";
        cin>> edad;
        cout << " -Ingresar talla: ";
        cin>> talla;
        compa->push_back(crear_A(n,edad, talla));
        cout <<"\t-> "<<n<< " ha sido anadido con exito!\n\n";
    }
}
void mostrar_T(vector<jugador> *compa){
    cout << "\n-TODOS EL EQUIPO-\n";
    int c = 1;
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        jugador p1 = *iter;
        cout << "Jugador #" << c << endl;
        mostrar_J(p1);
        c++;
    }
    cout << "\n";
}
void mostrar_N(vector<jugador> *compa){
    int c = 0;
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        jugador p1 = *iter;
        if (p1.edad<20 && p1.talla>1.7){
            if (c=0){
                cout << "ELLOS CUMPLEN LOS REQUISITOS\n";
            }
            cout << "jugador #" << c << endl;
            mostrar_J(p1);
        }
        c++;
    }
    if(c==0){
        cout << "NADIE CUMPLE CON EL  REQUISITO\n";
    }
    cout << "\n";
    return;
}

//Menu principal
int main(){
    vector<jugador>uni;
    while (true){
        cout << "--BIENVENID@--\n 1) Anadir jugadores\n 2) Mostrar todos los jugadores\n 3) Mostrar quienes cumplen los requisitos\n > ";
        int a{0};
        while (cin>>a){
            if(a==1){
                anadir(&uni);
                break;
            }if(a==2){
                mostrar_T(&uni);
                break;
            }if (a==3){
                mostrar_N(&uni);
                break;
            }
            else
                cout << "El valor no esta en la opciones vuelva a intentar\n > ";
        }
    }
    system("pause");
    return 0;
}