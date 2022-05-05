#include <iostream>
#include <string>

using namespace std;

void Separador(){
    cout << '\n';
    for (int i = 0; i < 20;i++)
        cout << " __";
    cout << '\n';
}
void Mostrar(char matri[5][4], int filas, int columnas){
    cout << "  \t";
    for (int u = 0; u < columnas;u++)
        cout << u + 1 << "\t";
    cout << "\n";
    for (int i = 0; i < filas; i++){
        cout << i + 1 << "|\t";
        for (int j = 0; j < columnas; j++){
            cout << matri[i][j] << "\t";
        }
        cout << "|\n";
    }    
}

void Mover_CD(char matri[5][4], int filas, int columnas){
    cout<< "Que columna desea mover?\n>";
    int c{0};
    while (true)
    {
        cin >> c;
        if (c>0 && c<=columnas-1)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    c -= 1;
    cout << "-ANTES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    for (int i = 0; i < filas;i++){
        char aux{'-'};
        aux = matri[i][c];
        matri[i][c]=matri[i][c+1];
        matri[i][c+1]=aux;
    }
    cout << "-DESPUES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    return;
}
void Mover_CI(char matri[5][4], int filas, int columnas){
    cout<< "Que columna desea mover?\n>";
    int c{0};
    while (true)
    {
        cin >> c;
        if (c>1 && c<=columnas)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    c -= 1;

    cout << "-ANTES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    for (int i = 0; i < filas;i++){
        char aux{'-'};
        aux = matri[i][c];
        matri[i][c]=matri[i][c-1];
        matri[i][c-1]=aux;
    }
    cout << "-DESPUES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    return;
}
void Mover_C(char matri[5][4], int filas, int columnas){
    cout<< "Derecha o izquiera?\n1) Derecha\n2) Izquierza\n>";
    int l{0};
    while (true){
        cin >> l;
        if (l==1 || l==2)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    switch (l)
    {
        case 1:
            Mover_CD(matri, filas, columnas);
            break;

        case 2:
            Mover_CI(matri, filas, columnas);
            break;
    }
    return;
}

void Mover_FAr(char matri[5][4], int filas, int columnas){
    cout<< "Que fila desea mover?\n>";
    int c{0};
    while (true)
    {
        cin >> c;
        if (c>1 && c<=filas)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    c -= 1;
    cout << "-ANTES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    for (int i = 0; i < columnas;i++){
        char aux{'-'};
        aux = matri[c][i];
        matri[c][i]=matri[c-1][i];
        matri[c-1][i]=aux;
    }
    cout << "-DESPUES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    return;
}
void Mover_FAb(char matri[5][4], int filas, int columnas){
    cout<< "Que columna desea mover?\n>";
    int c{0};
    while (true)
    {
        cin >> c;
        if (c>0 && c<=filas-1)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    c -= 1;

    cout << "-ANTES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    for (int i = 0; i < columnas;i++){
        char aux{'-'};
        aux = matri[c][i];
        matri[c][i]=matri[c+1][i];
        matri[c+1][i]=aux;
    }
    cout << "-DESPUES-\n";
    Separador();
    Mostrar(matri, filas, columnas);
    return;
}
void Mover_F(char matri[5][4], int filas, int columnas){
    cout<< "Arriba o abajo?\n1) Arriba\n2) Abajo\n>";
    int l{0};
    while (true){
        cin >> l;
        if (l==1 || l==2)
            break;
        else
            cout << "Ingresaste un valor no valido, vuelve a intentar\n>";
    }
    switch (l)
    {
        case 1:
            Mover_FAr(matri, filas, columnas);
            break;

        case 2:
            Mover_FAb(matri, filas, columnas);
            break;
    }
    return;
}    
int main(){
    char matri[5][4]{{'C', 'A', 'S', 'A'}, {'P', 'E', 'R', 'O'}, {'S', 'O', 'L', 'O'}, {'W', 'E', 'R', 'O'}, {'E', 'R', 'R', 'O'}};
    int filas{5}, columnas{4};
    while (true){
        Separador();
        int op{0};
        cout << "BIENVENIDO AL MENU\n";
        Mostrar(matri, filas, columnas);
        cout << "Que desea hacer ?\n1)Mover fila\n2)Mover columna\n>  ";
        cin >> op;
        switch(op){
            case 1:
                Mover_F(matri,filas,columnas);
                break;
            case 2:
                Mover_C(matri,filas,columnas);
                break;
        }
    }
}