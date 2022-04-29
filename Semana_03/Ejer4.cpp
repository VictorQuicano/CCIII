#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;
void comprueba(int);
void BuscaPrimos(int);

int main()
{
    cout<< "Ingrese la cantidad de primos deseados: ";
    int c{0};
    cin >> c;
    comprueba(c);

    BuscaPrimos(c);
    
    
}
void comprueba(int c){
    if (c<=0){
        cout << "Vuelve a ingresar un valor"<<endl;
        main();
    }
}
void BuscaPrimos(int d){
    int i=0, a=2;
    
    while (i!=d){
        int c = 0;
        for (int t=1; t<= a; t++){
            if (a%t==0){
                c += 1;
            }
        }
        if (c == 2){
            i += 1;
            cout << i<<")\t"<<a<<"\n";
            a += 1;
        }
        else
            a += 1;
    } 
}