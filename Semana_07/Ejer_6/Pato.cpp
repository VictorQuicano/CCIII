#include "Pato.h"

Pato::Pato(string nom):Ave(nom)
{
    Ave::setEspecie(especie);
}

Pato::~Pato()
{

}
void Pato::llamame(){
    Ave::llamame();
    cout << ", hago Cua Cua\n";
}