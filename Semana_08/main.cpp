#include "iostream"
#include "Cuadrado.h"
#include "Circulo.h"

using namespace std;
int main(){
    /*
    //EJERCICIO 1, 2, 3, 4
    Rectangulo R1(20.5, 2, "Azul", 10, -30);
    R1.imprimir();

    cout << "Escalar\n";
    R1.escalar(2);
    R1.imprimir();
    */
    /*
    Elipse E1(10, 23.4, "Rojo", -23, -10);
    E1.imprimir();

    Cuadrado C1(4.5, "Verde", 24, 30);
    C1.imprimir();

    Circulo Ci3(4.5, "Negro", 34, 23);
    Ci3.imprimir();
    Forma f3("Verdecito", 21, 244);
    f3.mostrar();
    */

    // EJERCICIO 5
    
    Rectangulo f2(26,4,"Rojo", 23, 34);
    Cuadrado f1(4,"Negro", 2453, -123);
    Cuadrado f3(3,"Amarillo", -12, 34);
    Elipse f4(12,45,"Humo", 233, 45);
    Circulo f5(23,"Azul", 976, -5);
    Forma *LaLista[5];
    LaLista[0]= &f1;
    LaLista[1]= &f2;
    LaLista[2]= &f3;
    LaLista[3]= &f4;
    LaLista[4]= &f5;
    cout << "-ANTES-\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "# "<<i+1<<'\n';
        LaLista[i]->imprimir();
    }
    //EJER 5 - AQUI CAMBIA LOS ATRIBUTOS
    for (int i = 0; i < 5; i++)
    {
        LaLista[i]->setColor("VERDECITO");
        LaLista[i]->setCoordenadas(13, 24);
    }
    //EJERCICIO 6 - IMPRIME CADA UNO CON UNA SOBRECARGA
    //Imprimir cada forma
    cout << "-DESPUES-\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "# "<<i+1<<'\n';
        LaLista[i]->imprimir();
    }
    //Busca la forma con mayor area y almacena su posicion en el array
    double a{0};
    int j = 0;
    for (int i = 0; i < 5; i++){
        if (a<LaLista[i]->area()){
            a = LaLista[i]->area();
            j = i;
        }
    }

    //EJERCICIO 7 Y 8 - Imprime la forma con mayor area
    cout << "\n\nLA MAYOR AREA ES DE:\n";
    LaLista[j]->imprimir();
    cout << "Tiene " << LaLista[j]->area() << "u cuadradas.\n";

    // Limpieza de memoria
    delete *LaLista;
    
    system("pause");
    return 0;
}