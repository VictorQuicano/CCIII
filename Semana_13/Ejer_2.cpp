#include <iostream>
#include <vector>

using namespace std;
struct alumno{
    string nombre;
    char grupo;
    double n1{0};
    double n2{0};
    double n3{0};
    double pro{0};
};
alumno crear_A(string n, char g, double n1, double n2, double n3,double p){
    alumno temp;
    temp.nombre = n;
    temp.grupo = g;
    temp.n1 = n1;
    temp.n2 = n2;
    temp.n3 = n3;
    temp.pro = p;
    return temp;
}
double nota_F(alumno a1){
    double d1 = (a1.n1 * 0.15) + (a1.n2 * 0.2) + (a1.n3 * 0.25) + (a1.pro * 0.4);
    return d1;
}
void mostrar_AF(alumno a1){
    cout << a1.nombre << " del grupo " << a1.grupo << endl;
    cout << " NOTA FINAL: " << nota_F(a1) << endl;
}
void mostrar_A(alumno a1){
    cout << a1.nombre << " del grupo "<<a1.grupo<<"\n SUS NOTAS:\n -Nota 1: "<<a1.n1<<"\n -Nota 2: "<<a1.n2<<"\n -Nota 3: "<<a1.n3<<"\n -Proyecto"<<a1.pro<<endl;
}
//Funciones del menu
void anadir(vector<alumno> *compa){
    cout << "Cuantos alumnos ingresara?\n >";
    double a{0};
    cin >> a;
    for (double i = 0; i < a;i++){
        cout << "\n";
        cout << "Alumno #" << i + 1<<":\n";
        string n;
        char g;
        double n1;
        double n2;
        double n3;
        double p;
        cout << " Ingresar nombre: ";
        cin>> n;
        cout << " Ingresar grupo: ";
        cin>> g;
        cout << " Ingresar nota fase 1: ";
        cin>> n1;
        cout << " Ingresar nota fase 2: ";
        cin>> n2;
        cout << " Ingresar nota fase 3: ";
        cin>> n3;
        cout << " Ingresar nota del proyecto: ";
        cin>> p;
        alumno a1;
        a1.nombre = n;
        a1.grupo = g;
        a1.n1 = n1;
        a1.n2 = n2;
        a1.n3 = n3;
        a1.pro = p;
        compa->push_back(a1);
        cout <<"\t-> "<<n<< " ha sido anadido con exito!\n\n";
    }
}
void mostrar_T(vector<alumno> *compa){
    cout << "\n-TODOS LOS ALUMNOS-\n";
    int c = 1;
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        alumno p1 = *iter;
        cout << "ALUMNO #" << c << endl;
        mostrar_A(p1);
        c++;
    }
    cout << "\n";
}
void mostrar(vector<alumno> *compa){
    int c = 1;
    for (auto iter = compa->begin(); iter != compa->end();iter++){
        alumno p1 = *iter;
        cout << "ALUMNO #" << c << endl;
        mostrar_AF(p1);
        c++;
    }
    cout << "\n";
    return;
}

//Menu principal
int main(){
    vector<alumno>uni;
    while (true){
        cout << "--BIENVENID@--\n 1) Anadir alumnos\n 2) Mostrar todos los alumnos y sus notas\n 3) Mostrar alumnos y notas finales\n > ";
        int a{0};
        while (cin>>a){
            if(a==1){
                anadir(&uni);
                break;
            }if(a==2){
                mostrar_T(&uni);
                break;
            }if (a==3){
                mostrar(&uni);
                break;
            }
            else
                cout << "El valor no esta en la opciones vuelva a intentar\n > ";
        }
    }
    system("pause");
    return 0;
}