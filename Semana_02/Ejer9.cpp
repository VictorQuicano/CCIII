#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int a{0};
    cout << "Cuantos filas necesitas?\n";
    cin >> a;
    cout << "\n\n";
    for (int i = 1; i <=a;i++){
        for (int j = 0; j < i;j++)
            cout << '*';
        cout << '\n';
    }
}   