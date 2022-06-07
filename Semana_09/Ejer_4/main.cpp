#include "iostream"
#include "Maxmin.h"

using namespace std;

int main(){
    int array[7]{2, 4, -5, 1, -123,6,7};
    int *a = &array[0];
    float array2[4]{12.43, 1, -23.4, 2};
    float *b = &array2[0];
    Maxmin<int> a1(a, 7);
    Maxmin<float> a2(b, 4);
    cout << "- De 1 el maximo es " << a1.maximo() << " el minimo " << a1.min()<<endl;
    cout << "De 2 el maximo es " << a2.maximo() << " el minimo " << a2.min()<<endl;
    system("pause");
    return 0;
}