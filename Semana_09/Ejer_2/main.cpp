#include "opera.h"
#include "iostream"

using namespace std;
int main(){
    Opera<int> ent(3, 5);
    Opera<float> deci(56.2, 3.2);
    cout << "1) Con " << ent.getX() << " y " << ent.gety() << " las operaciones son:\n-Suma: " << ent.sum() << "\n-Resta: " << ent.rest() << "\n-Multiplicacion: " << ent.mul() << "\n-Division: " << ent.div() << endl;
    cout << "2) Con " << deci.getX() << " y " << deci.gety() << " las operaciones son:\n-Suma: " << deci.sum() << "\n-Resta: " << deci.rest() << "\n-Multiplicacion: " << deci.mul() << "\n-Division: " << deci.div() << endl;
    system("pause");
    return 0;
}