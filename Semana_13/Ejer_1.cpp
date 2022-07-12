#include "iostream"
#include <vector>

using namespace std;
//Structures del programa
string meses[12] = {"Enero","Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio","Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
struct fecha{
    int dia;
    int mes;
    int anio;
};
fecha crear_F(int d, int m, int a){
    fecha temp;
    temp.dia = d;
    temp.mes = m;
    temp.anio = a;
    return temp;
}
void mostrar_F(fecha f1){
    cout << f1.dia << " de " << meses[f1.mes-1] << " del " << f1.anio << endl;
}
struct personas{
    string nombre;
    fecha cumple;
};
int get_mes(personas p1){
    int d = p1.cumple.mes;
    return d;
}
personas crear_P(int d, int m, int a, string nom){
    personas temp;
    temp.nombre = nom;
    temp.cumple = crear_F(d, m, a);
    return temp;
}
void mostrar_P(personas p1){
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Su cumpleanios es: ";
    mostrar_F(p1.cumple);
}

//Funciones del menu
void anadir(vector<personas> *compa){
    cout << "Cuantos personass ingresara?\n >";
    int a{0};
    cin >> a;
    for (int i = 0; i < a;i++){
        string nombre;
        int dia;
        int mes;
        int anio;
        cout << "Ingresar nombre: ";
        cin>> nombre;
        cout << "Ingresar dia de nacimiento: ";
        cin >> dia;
        cout << "Ingresar mes de nacimiento (num): ";
        cin >> mes;
        cout << "Ingresar anio de nacimiento: ";
        cin >> anio;
        compa->push_back(crear_P(dia, mes, anio, nombre));
        cout << nombre << " ha sido anadido con exito!\n\n";
    }
}
void cumple(vector<personas> *compa){
    cout << "Que mes busca?(num)\n >";
    int a{0};
    cin >> a;
    int c = 0;
    cout << "EN " << meses[a - 1] << " CUMPLE\n";
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        personas p1 = *iter;
        if (get_mes(p1)==a){
            mostrar_P(p1);
            c++;
        }
    }
    if(c==0){
        cout << "Nadie cumpleanios en " << meses[a - 1]<<endl;
        return;
    }
}
void mostrar(vector<personas> *compa){
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        personas p1 = *iter;
        mostrar_P(p1);
    }
    return;
}

//Menu principal
int main(){
    vector<personas> compa;
    while (true){
        cout << "--BIENVENID@--\n 1) Anadir companeros\n 2) Quien cumple este mes?\n > ";
        int a{0};
        while (cin>>a){
            if(a==1){
                anadir(&compa);
                break;
            }if(a==2){
                cumple(&compa);
                break;
            }if (a==3){
                mostrar(&compa);
                break;
            }
            else
                cout << "El valor no esta en la opciones vuelva a intentar\n > ";
        }
    }
    system("pause");
    return 0;
}

