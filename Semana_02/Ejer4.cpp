#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int i = 0, a, b;
    cout << "Ingrese 2 numeros" << endl;
    cin >> a >> b;

    while (a!=b){
        int c = 0;
        for (int t=1; t<= a; t++){
            if (a%t==0){
                c += 1;
            }
        }
        if (c<=2){
            i += 1;
            cout << i<<")\t"<<a<<"\n";
            a += 1;
        }
        else
            a += 1;
    }    
    if (i==0){
        while (i!=1){
        int c = 0;
        for (int t=1; t<= b; t++){
            if (b%t==0){
                c += 1;
            }
        }
        if (c<=2){
            i += 1;
            cout << i<<")\t"<<b<<"\n";
        }
        else
            b += 1;
    }  
    }
        
}
