#include "iostream"
#include "Gallina.h"
#include "Ganzo.h"
#include "Pato.h"
using namespace std;
int main(){
    Pato Juan("Juanin");
    Ganzo Martin("Marti");
    Gallina Juana("Juana");

    Juan.llamame();
    Martin.llamame();
    Juana.llamame();
    system("pause");
    return 0;
}
