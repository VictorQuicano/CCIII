#include <iostream>

using namespace std;

int main(){
    cout << "Ingrese los minutos a anadir: \n";
    int anadido;
    cin >> anadido;
    int h = 0, m = 0;
    h = anadido / 60;
    m = anadido % 60;
    cout <<"Anadiras: \n"<< h << "h " << m << "m" << endl;

    int horaA, minutoA;
    cout << "Ingrese la hora actual formato 24h, por ejemplo  (14:23)" << endl;
    cin >> horaA >> minutoA;
    int result_h = 0, result_m = 0;
    int minutos_extra = (horaA * 60 + minutoA) - (anadido);
    if (minutos_extra * -1 > 1440)
    {
        int abs = minutos_extra * -1;
        int dias_ayer = abs / 1440;
        int resto = abs % 1440;
        result_h = resto / 60;
        result_m = resto % 60;
        cout << "De hace " << dias_ayer << " dias el resultado es " << result_h << " : " << result_m;
  }
  else{
    result_h = minutos_extra / 60;
    result_m = minutos_extra % 60;
    cout<<result_h<<":"<<result_m<<endl;
  }
  
  return 0;
}