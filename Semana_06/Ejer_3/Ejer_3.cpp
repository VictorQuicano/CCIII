#include "iostream"
#include "fechas.h"

using namespace std;


int main(){
    cout << "Ingrese fecha actual (Ejemplo 28-04-2022): ";
    int da, ma, aa;
    char x, y;
    cin >> da >> x >> ma >> y >> aa;
    fechas fecha_actual = fechas(da, ma, aa);

    cout << "Ingrese fecha de nacimiento (Ejemplo 28-12-2001): ";
    int dn, mn, an;
    cin >> dn >> x >> mn >> y >> an;
    fechas fecha_nacimiento = fechas(dn, mn, an);
    fecha_actual.compararF(fecha_actual, fecha_nacimiento);

    return 0; 
}
