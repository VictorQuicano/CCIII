#include <iostream>

using namespace std;

void sumar (int *a, int *b){
    int c = *a + *b;
    cout << "La suma de " << *a << " y " << *b << ": " << c<<'\n';
}
void restar (int *a, int *b){
    int c = *a - *b;
    cout << "La resta de " << *a << " y " << *b << ": " << c<<'\n';
}
void multiplicar (int *a, int *b){
    int c = (*a) * (*b);
    cout << "La multiplicacion de " << *a << " y " << *b << ": " << c<<'\n';
}
void dividir (int *a, int *b){ 
    float c = ((*a) *(1.0))/ (*b);
    cout << "La multiplicacion de " << *a << " y " << *b << ": " << c<<'\n';
}
void cambiar(int *a, int *b){
   cout << "Ingrese nuevo valor de a y b\n";
    cin >> *a >> *b; 
}

int main(){
    int a{0}, b{0};
    cout << "Ingrese valor de a y b\n";
    cin >> a >> b;
    while(true){
        cout << "-MENU-\nQue operacion desea realizar\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5)Cambiar datos\n >";
        int op{0};
        while (true){
            cin >> op;
            if (op>6)
                cout << "Valor no valido, vuelve a intentar\n >";
            else
                break;
        }
        switch (op)
        {
            case 1:
                sumar(&a,&b);
                break;
            case 2:
                restar(&a,&b);
                break;
            case 3:
                multiplicar(&a,&b);
                break;
            case 4:
                dividir(&a,&b);
                break;
            case 5:
                cambiar(&a,&b);
                break;
        }
    }

}