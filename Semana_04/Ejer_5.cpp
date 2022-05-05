#include <iostream>
#include <string>

using namespace std;

void Separador(){
    for (int i = 0; i < 20;i++)
        cout << " __";
    cout << '\n';
}
void mostrar(string producto[],float precio[],int stock[], int *tamano){
    Separador();
    for (int i = 0; i < *tamano;i++)
        cout << "P #"<<i+1<<") "<<producto[i] << " "<< ":\tCuesta: "<< precio[i]<< ".\tSu stock es: "<< stock[i]<<'\n';
    Separador();
}

bool busco_P(string producto[], string busco, int tamano){
    for (int i = 0; i < tamano;i++)
    {
        if (producto[i]==busco){
            return true;
            break;
        }
    }
    return false;
}
void Le_busca(string producto[], string P_busca,int tamano){
    if (busco_P(producto, P_busca, tamano)==true)
        cout << '\n'<<P_busca << " Si esta en el inventario\n";
    else
        cout << '\n'<<P_busca << " NO esta en el inventario\n";
}

void buscar(string producto[], float precio[], int stock[], int tamano)
{

    cout << "Que producto estas buscando? " << "\n> ";
    string busquele;
    cin >> busquele;
    cout << "Ingresaste:" << busquele;
    Le_busca(producto, busquele, tamano);
    
}
void modificar_P(string producto[],float precio[], int tamano)
{
    cout << "De que producto se va a cambiar el precio?\n";
    int mod{0};
    while (true){
        cin >> mod;
        if (mod<=tamano)
            break;
        else
            cout << "Vuelve a ingresar el numero de producto que desea cambiar: ";
    }
    cout << "Ingrese el nuevo precio para " << producto[mod - 1] << ":\n";
    float new_precio{0};
    cin >> new_precio;
    cout << "Se cambio el precio de " << producto[mod - 1] << "\nAntes: " << precio[mod - 1] << "\nDespues: "<<new_precio<<'\n';
    precio[mod - 1] = new_precio;
}
void modificar_S(string producto[],int stock[], int tamano)
{
    cout << "De que producto se va a cambiar el precio?\n";
    int mod{0};
    while (true){
        cin >> mod;
        if (mod<=tamano)
            break;
        else
            cout << "Vuelve a ingresar el numero de producto que desea cambiar: ";
    }
    cout << "Ingrese el nuevo precio para " << producto[mod - 1] << ":\n";
    int new_stock{0};
    cin >> new_stock;
    cout << "Se cambio el precio de " << producto[mod - 1] << "\nAntes: " << stock[mod - 1] << "\nDespues: "<<new_stock<<'\n';
    stock[mod - 1] = new_stock;
}
void modificar(string producto[],float precio[], int stock[], int tamano)
{
    int i{};
    cout << "Que desea modificar?\n1)\tPrecio\n2)\tStock\t>";
    cin >> i;
    switch (i)
    {
    case (1):
        modificar_P(producto, precio, tamano);
        break;
    case (2):
        modificar_S(producto,stock, tamano);
        break;
    }
}
void Eliminar(string producto[],float precio[],int stock[], int *tamano, int mod){
    cout << "Aqui es gg";
    for (int i = mod; i < *tamano -1 ; i++)
    {
        producto[i] = producto[i + 1];
        precio[i] = precio[i + 1];
        stock[i] = stock[i + 1];
    }
    *tamano -= 1;
    cout << "Se elimino correctamente.\n";
    cout << "De aqui ni pasas" << '\n';
    mostrar(producto, precio, stock,tamano); 
}
void dar_Alta(string producto[],float precio[],int stock[], int *tamano){
    mostrar(producto, precio, stock, tamano);
    cout << "\nQue producto desea dar de alta?\n";
    int mod{0};
    while (true){
        cin >> mod;
        if (mod<=*tamano)
            break;
        else
            cout << "Vuelve a ingresar el numero de producto que desea cambiar: ";
    }
    mod -= 1;
    cout << mod<<endl;
    Eliminar(producto,precio,stock,tamano, mod);
}
int main(){

    //Listas ya llenas, para ahorrase ingresar datos
    string producto[10]{"Patito", "CuaCua", "Papas", "Tomate", "Cafe", "Pan", "Huevos", "Aceite", "Lapices", "Cuadernos"};
    int stock[10]{23,56,34,21,68,45,95,23,67,21};
    float precio[10] { 2.5, 0.5, 10, 3,60.4,14,6,12.4,23,13};
    int tamano{10};
    //En caso desee ingresar a mano
    /*
    string producto[10];
    int stock[10];
    float precio[10];
    int tamano{10};
    for (int i = 0; i < 10;i++){
        cout << "Ingrese producto de producto #"<<i+1<<": ";
        getline(cin, producto[i]);
        cout<< "Ingrese precio de producto #" << i + 1 << ": ";
        cin >> precio[i];
        cout << "Ingrese stock de producto #"<<i+1<<": ";
        cin >> stock[i];
        cout << "\n";
    }*/
    int *t = &tamano;

    while (true){
        Separador();
        int i = 0;
        cout << "Que desea hacer:\n1)Mostrar\n2)Buscar Producto\n3)Modificar datos\n4)Dar de alta un producto\n>";
        cin >> i;
        switch (i)
        {
            case (1):
                mostrar(producto,precio, stock,t);
                break;
            case (2):{
                buscar(producto,precio, stock, tamano);
                break;
            }
            case (3):
                modificar(producto, precio, stock, tamano);
                break;
            case (4):
                dar_Alta(producto, precio, stock, t);
                break;
            default:
                break;
        }
    } 
}
