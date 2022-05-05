#include <iostream>
#include <string>

using namespace std;

int main(){
    int primo[25];
    int i = 0, a{2}, b{100};
    
    while (a!=b){
        int c = 0;
        for (int t=1; t<= a; t++){
            if (a%t==0){
                c += 1;
            }
        }
        if (c<=2){
            primo[i]=a;
            a += 1;
            i += 1;
        }
        else
            a += 1;
    }   
    for (int i = 0; i < 25;i++)
        cout << i + 1 << ") " << primo[i] << "\n";
}
