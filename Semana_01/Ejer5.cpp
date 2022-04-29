#include <iostream>
#include <string>

using namespace std;

int redondea(int a){
    if (a>10)
        return a;
    else{
        if(a%10>5)
            a = (a / 10) + 1;
        else
            a = (a / 10);
        redondea(a);
    }
    
}

int main(){
    int a{0}, b{0};
    char c{'.'};
    cout << "Ingrese un valor decimal: \n";
    cin >> a >> c >> b;

    if (b==0)
        cout << "El numero redondeado seria: \n" << a;
    else
        if (redondea(b)>5)
            a += 1;
    
    cout << "El numero redondeado seria: \n" << a;
}   