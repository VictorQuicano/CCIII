#include <iostream>

using namespace std;

void intercambiar (int *a, int *b){
    int temp{*a};
    *a = *b;
    *b=temp;
}
int main(){
    int a{0}, b{0};
    cout << "ingresa valores:\n";
    cin >> a >> b;
    intercambiar(&a, &b);
    cout << a <<" "<< b;
}