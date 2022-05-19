#include "lista.h"

lista::lista(int m){
    n=m;
    p = new int[n];
    cout << "Lista de" << n << " elementos creada\n";
}
lista::~lista(){
}

void lista::llenar(){
    for (int i = 0; i < n;i++){
        cout << "Valor para el elemento #" << i + 1 << ") ";
        cin >> p[i];
        c++;
    }
} 

void lista::anadir(){
    int x;
    cout << "Ingrese  el valor a ingresar\n";
    cin >> x; 
    if (c < n)
    {
        p[c]=x;
        c++;
    }
    else
        cout << "Lista llena\n";
}
void lista::estallena(){
    if(c==n)
        cout << "lista llena";
    else
        cout << "Aun quedan " << n - c << " espacios\n";
}
void lista::quitar(){
    int pos;
    cout << "Que posicion tiene el elemento qque deseas eliminar?\n >";
    cin >> pos;
    if (c == 0 || pos - 1 > c)
        cout << "Eso no se puede realizar\n";
    else{
        for (int i = pos - 1; i < c; i++){
        p[i] = p[i = 1];
        }
        p[c] = 0;
        c--;
    }
}
void lista::mostrar(){
    cout << "-LISTA ACTUALIZADA-\n";
    for (int i = 0; i < c; i++)
    {
        cout << " " << p[i] << ' ';
    }
    cout << "\n";
}
