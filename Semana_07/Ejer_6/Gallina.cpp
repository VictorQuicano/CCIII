#include "Gallina.h"

Gallina::Gallina(string nom):Ave(nom)
{
    Ave::setEspecie(especie);
}

Gallina::~Gallina()
{

}
void Gallina::llamame(){
    Ave::llamame();
    cout << ", hago Pio Pio\n";
}