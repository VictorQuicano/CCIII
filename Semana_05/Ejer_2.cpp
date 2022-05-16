#include <iostream>
#include <ctime>

using namespace std;
double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
int main(){
    srand(time(NULL));
    float *vectores1 = NULL;
    float *vectores2 = NULL;
    vectores1 = new float[20];
    vectores2 = new float[20];
    for (int j = 0; j < 10;j++){
        for (int i = 0; i < 20; i++)
        {
            vectores1[i] = fRand(1.0, 100.0);
            vectores2[i] = fRand(1.0, 100.0);
        }
        cout << "- Operacion #" << j + 1 << " -\n1)[ ";
        for (int i = 0; i < 20; i++)
            cout << vectores1[i] << " - ";
        cout << " ]\n2)[";
        for (int i = 0; i < 20; i++)
            cout << vectores1[i] << " - ";
        cout << "]\nProducto Punto de la Opercion #" << j + 1 << ": ";
        int pro;
        for (int i = 0; i < 20;i++)
            pro += (vectores1[i] * vectores2[i]);
        cout << pro << "\n";
    }
        
    
}