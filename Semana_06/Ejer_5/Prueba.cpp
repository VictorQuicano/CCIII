#include "matriz.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool revisa(int *n, int rando){
    for(int i=0; i<10; i++)
        if(rando == n[i])
            return true;
    return false;
}
int main(){
    int** per3;
    int *n = new int[9];
    int rando;
    srand(time(NULL));
    for (int i = 0; i < 9;i++){
        do
            rando = rand() % 9 +1;
        while (revisa(n, rando));
        n[i] = rando;
    }
    cout << "1vivo";
    per3 = new int *[3];
    int c{0};
    cout << "2vivo";
    for (int i = 0; i < 3; i++)
    {
        per3[i] = new int[3];
        for (int j = 0; j < 3;j++){
            per3[i][j] = n[c];
            c++;
        }
    }
    cout << "3vivo";
    cout << "-LA MATRIZ-\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            cout << per3[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "vivo";
}