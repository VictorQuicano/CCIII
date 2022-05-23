#include "Ganzo.h"

Ganzo::Ganzo(string nom):Ave(nom)
{
    Ave::setEspecie(especie);
}

Ganzo::~Ganzo()
{

}
void Ganzo::llamame(){
    Ave::llamame();
    cout << ", hago Crack Crack\n";
}