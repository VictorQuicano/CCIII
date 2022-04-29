#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;
int main(){
    int a, b[11], c = 0;
    cin >> a;

    if (a <= 100 || a >= 999)
        cout << "Vuelve a intentar";
    else
    {
        while (a > 0){
            b[c] = a % 2;
            a = a / 2;
            c += 1;
        }
    }
    for (int i=c-1;i>=0;i--)
        cout<<b[i];
}
