#include "Ave.h"

Ave::Ave(string a)
{
    nombre = a;
}

Ave::~Ave()
{

}
void Ave::setEspecie(string espe){
    especie = espe;
}
void Ave::llamame(){
    cout << "Soy " << nombre << ", un(una) " << especie << ", tengo " << patas << " patas";
}
