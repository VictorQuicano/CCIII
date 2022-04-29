#include <iostream>
#include <string>

using namespace std;

int main(){
    int x{0}, sum {0};
    for (int i = 0; i < 10;i++){
        cout << i + 1 << ") ";
        cin >> x;
        if (x<0)
            sum += x;
    }
    cout << "La suma de los negativos es " << sum;
}