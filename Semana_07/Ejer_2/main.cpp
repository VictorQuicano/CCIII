#include <iostream>
#include "Objeto.h"

using namespace std;
int main(){
    Objeto mesa(203, 55, 02, "madera", "mesa");
    mesa.mostrar();
    system("pause");
    return 0;
}