#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main(){
    int i=0, a=2;
    
    while (i!=50){
        int c = 0;
        for (int t=1; t<= a; t++){
            if (a%t==0){
                c += 1;
            }
        }
        if (c == 2){
            i += 1;
            cout << i<<")\t"<<a<<"\n";
            a += 1;
        }
        else
            a += 1;
    }    
    
}
