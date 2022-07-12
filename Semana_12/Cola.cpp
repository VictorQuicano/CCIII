#include <iostream>
#include <ctime>

using namespace std;

class Nodo {
public:
    int data;
    Nodo* next;
};

class Cola{
public:
    Cola() {
        head = NULL;
        ulti = head;
    }
    ~Cola() {};
    int size();
    void push(int);
    void pop();
    void print();
    void buscar(int);
    int get_ulti();
    int get_head();

private:
    Nodo* head;
    Nodo *ulti;
};

int Cola::size(){
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
void Cola::push(int val) {
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
        ulti = temp->next;
    }
}
void Cola::buscar(int val){
    if (head==NULL){
        cout << "Lista Vacia\n";
    }
    Nodo *temp = head;
    while(temp!=NULL){
        if (temp->data==val){
            cout << "- " << val << " SI esta en la lista\n";
            return;
        }
        temp = temp->next;
    }
    cout << "- " << val << " NO esta en la lista\n";
    return;
}
void Cola::pop(){
    Nodo *temp = head, *temp2=temp->next;
    head = temp2;
    delete temp;
}
void Cola::print() {
    if (head == NULL) {
        cout << "Cola vacia" << endl;
    }
    else {
        cout << "Cola -> ";
        Nodo* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}
int Cola::get_ulti() {
    return ulti->data;
}
int Cola::get_head() {
    return head->data;
}
int main(){
    Cola *Hombres = new Cola();
    Cola *Mujeres = new Cola();
    Hombres->push(20);
    Hombres->push(15);
    Hombres->push(12);
    Mujeres->push(13);
    Mujeres->push(18);
    Mujeres->push(23);
    for (int i = 0; i < 100;i++){
        if (Hombres->get_head()>Mujeres->get_head()){
            Hombres->push(Hombres->get_head());
            Hombres->pop();
            if (i==2||i==9||i==99)
                cout << "Hombres\n";
        }
        else{
            Mujeres->push(Hombres->get_head());
            Mujeres->pop();
            if (i==2||i==9||i==99)
                cout << "Mujeres\n";
        }
    }
    delete Hombres;
    delete Mujeres;
    system("pause");
    return 0;
}
    