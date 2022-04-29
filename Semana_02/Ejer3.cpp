#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int i=0, a=1;
    
    while (a!=101){
        int c = 0;
        for (int t=1; t<= a; t++){
            if (a%5==0){
                c += 1;
            }
        }
        if (c >=1){
            i += 1;
            cout << i<<")\t"<<a<<"\n";
            a += 1;
        }
        else
            a += 1;
    }    
    
}
