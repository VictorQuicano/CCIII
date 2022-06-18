#include "Pila.h"
#include "iostream"

using namespace std;

Pila::Pila(string name)
{
    this->name = name;
    head = NULL;
}

Pila::~Pila(){}
int Pila::size(){
    int c = 0;
    if (head == NULL){
        return c;
    }
    else{
        c++;
        Nodo* temp = head;
        while (temp->next != NULL) { 
            temp = temp->next;
            c++;
        }
        return c;
    }  
}
void Pila::push(int val) {
    tam++;
    Nodo* NuevoN = new Nodo();
    NuevoN->data = val;
    NuevoN->next = NULL;
    if (head == NULL) {
        head = NuevoN;
    }
    else {
        Nodo* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = NuevoN; 
    }
}
int Pila::ult(){
    Nodo *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    return temp->data;
}
void Pila::pop(){
    if(head->next==NULL){
        head = NULL;
        return;
    }
    Nodo *temp = head, *temp2;
    while (temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
    delete temp;
}
bool Pila::be_inP(int val){
    Nodo *temp = new Nodo();
    temp = head;
    int t = 0;
    while (t <= size()){
        if (temp->data==val){
            return true;
        }
        t++;
        temp = temp->next;
    } 
    return false;
}
int Pila::pos(int val){
    Nodo *temp =head;
    int t = 0;
    while (t <= size()){
        if (temp->data==val){
            return t;
        }
        t++;
        temp = temp->next;
    } 
    return t;
};
void Pila::print() {
    if (head == NULL) {
        cout << "Pila vacia" << endl;
    }
    else {
        cout << "Pila -> ";
        Nodo* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;

        }
        cout << "NULL \n";
    }
}