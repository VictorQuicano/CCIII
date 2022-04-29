#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int fibo{0}, fiboa{1},a{1};
    while (a<=10){
        cout << a << ") " << fibo<<'\n';
        fibo += fiboa;
        cout << a + 1 << ") " << fiboa<<'\n';
        fiboa += fibo;
        a += 1;  
    }
}   