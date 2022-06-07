#include <iostream>
#include "Trio.h"

using namespace std;

int main(){
    Trio <int> t1(-4, 5, 4);
    Trio <double> t2(-23.45, 2, 45.34);
    cout << "1) El mayor de los 3 elemento es " << t1.getMax() << ",  el menor " << t1.getMin()<<endl;
    cout << "2) El mayor de los 3 elemento es " << t2.getMax() << ",  el menor " << t2.getMin()<<endl;
    system("pause");
    return 0;
}