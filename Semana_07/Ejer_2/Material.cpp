#include "Material.h"
#include "iostream"

using namespace std;
Material::Material(string a)
{
    materia = a;
}

Material::~Material()
{

}

void Material::setMateria(string a){
    materia = a;
}
void Material::mostrarM(){
    cout<<"Material: "<<materia;
}