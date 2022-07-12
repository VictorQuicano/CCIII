#include <iostream>
#include <vector>
using namespace std;
struct empleado{
    string nombre;
    char sexo;
    int sueldo{0};
};
empleado crear_A(string n,char sexo, int sueldo){
    empleado temp;
    temp.nombre = n;
    temp.sexo = sexo;
    temp.sueldo = sueldo;
    return temp;
}

void mostrar_E(empleado a1){
    cout << a1.nombre << " / ";
    if(a1.sexo=='M'){
        cout << "Varon\n";
    }
    else{
        cout << "Mujer\n";
    }
    cout<< " Tiene un sueldo de: " << a1.sueldo << endl;
}
//Funciones del menu
void anadir(vector<empleado> *compa){
    cout << "Cuantos trabajadores ingresara?\n >";
    int a{0};
    cin >> a;
    for (int i = 0; i < a;i++){
        cout << "\n";
        cout << "Trabajador #" << i + 1<<":\n";
        string n;
        char sexo;
        int sueldo;
        cout << " -Ingresar nombre: ";
        cin>> n;
        cout << " -Ingresar sexo(F/M): ";
        cin>> sexo;
        cout << " -Ingresar sueldo: ";
        cin>> sueldo;
        compa->push_back(crear_A(n,sexo, sueldo));
        cout <<"\t->"<<n<< " ha sido anadido con exito!\n\n";
    }
}
void mostrar_Mm(vector<empleado> *compa){
    empleado max;
    int s_max=(compa->at(0)).sueldo;
    empleado min;
    int s_min = (compa->at(0)).sueldo;
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        empleado p1 = *iter;
        if (s_max<=p1.sueldo){
            max = p1;
        }
        if(s_min>=p1.sueldo){
            min = p1;
        }
    }
    cout << "-MAYOR SUELDO-\n";
    mostrar_E(max);
    cout << "-MENOR SUELDO-\n";
    mostrar_E(min);
}
void mostrar_T(vector<empleado> *compa){
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        empleado p1 = *iter;
        cout<<p1.sueldo<<endl;
    }
}



//Menu principal
int main(){
    vector<empleado>uni;
    while (true){
        cout << "--BIENVENID@--\n 1) Anadir empleados\n 2) Mostrar el mayor y menor sueldo\n > ";
        int a{0};
        while (cin>>a){
            if(a==1){
                anadir(&uni);
                break;
            }if(a==2){
                mostrar_Mm(&uni);
                break;
            }
            else
                mostrar_T(&uni);
                cout << "El valor no esta en la opciones vuelva a intentar\n > ";
        }
    }
    system("pause");
    return 0;
}