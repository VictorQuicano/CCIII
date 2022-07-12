#include <iostream>
#include <cstdlib>
#include<time.h>

using namespace std;
//class Producto almacena punteros a una variable
class producto{
private:
    string *nombre;
    int *codigo = new int(999+rand()%(10001-999));
    double *precio = new double(0.0);
    int *stock = new int(0);
public:
    producto(string &name, double &precio, int &s){
        this->nombre = &name;
        this->precio = &precio;
        this->stock = &s;
    };
    ~producto(){
        delete nombre;
        delete codigo;
        delete precio;
        delete stock;
    };
    string get_nombre(){
        return (*nombre);
    };
    int get_codigo(){
        return (*codigo);
    };
    int get_stock(){
        return (*stock);
    };
    void set_nombre(string nomb){
        *nombre = nomb;
    };
    void set_precio(double prec){
        *precio = prec;
    };
    void set_stock(int sto){
        *stock = sto;
    };
    void imprimir(){
        if(nombre->length()<8){
            cout << *codigo << '\t' << *nombre << "\t\t" << *precio << '\t' << *stock << '\n';
            return;
        }
        cout << *codigo << '\t' << *nombre << "\t" << *precio << '\t' << *stock << '\n';
    }
};
//Class Lista de Productor almacena un puntero a puntero de clase productos 
class lista_Pro{
private:
    producto **lista=new producto*[10];
public:
    //Recibe una lista como constructor 
    lista_Pro(string nombres[10], double precios[10],int stock[10]){
        for (int i = 0; i<10;i++){
            lista[i] = new producto(nombres[i], precios[i], stock[i]);
        }
    };
    ~lista_Pro(){
        delete lista;
    };
    //Devuelve posicion del producto en la  lista, buscando nombres
    int buscar_pro(string producto){
        int a;
        for (int i = 0; i < 10;i++){
            a = i;
            if (lista[i]->get_nombre()==producto)
                return a;
        }
        //Si el producto no existe envia un valor fuera de rango
        return -1;
    };
    //Devuelve posicion del producto en la  lista, buscando nombres
    int buscar_proC(int code){
        int a;
        for (int i = 0; i < 10;i++){
            a = i;
            if (lista[i]->get_codigo()==code)
                return a;
        }
        return -1;
    };
    //Muestra en pantalla el producto encontrado
    void b_nombre(string nombre){
        int i = buscar_pro(nombre);
        if(i!=-1){
            cout << "Producto encontrado\n";
            cout << "CODIGO\tPRODUCTO\tPRECIO\tSTOCK\n";
            for (int i = 40; i;i--)
                cout << "_";
            cout << endl;
            lista[i]->imprimir();
            return;
        }
        else{
            cout << "Producto no encontrado\n";
        }
    };
    //Muestra en pantalla el productor encontrado usando codigos
    void b_code(int code){
        int i = buscar_proC(code);
        if(i!=-1){
            cout << "Producto encontrado\n";
            cout << "CODIGO\tPRODUCTO\tPRECIO\tSTOCK\n";
            for (int i = 40; i;i--)
                cout << "_";
            cout << endl;
            lista[i]->imprimir();
            return;
        }
        else{
            cout << "Producto no encontrado\n";
        }
    };
    //Funcion que mostrara un pequeno menu de que es lo que el usuario modificara
    void modificar(){
        cout << "Ingrese codigo del producto a modificar\n > ";
        int code, a{0};
        cin >> code;
        while (true){
            a = buscar_proC(code);
            if (a!=-1)
                break;
            else{
                cout << "No existe ese producto, vuelva a intentar\n > ";
                cin >> code;
            }
        }
        cout << "Que desea modificar?\n1) Nombre\n2) Precio\n3) Stock\n> ";
        int i = 0;
        cin >> i;
        while(true){
            if(i== 1){
                string nN;
                cout << "Nuevo nombre para " << lista[a]->get_nombre() << "\n > ";
                cin >> nN;
                lista[a]->set_nombre(nN);
                break;
            }if(i==2){
                double nP;
                cout << "Nuevo precio para " << lista[a]->get_nombre() << "\n > ";
                cin >> nP;
                lista[a]->set_precio(nP);
                break;
            }if(i==3){
                int nS;
                cout << "Nuevo stock para " << lista[a]->get_nombre() << "\n > ";
                cin >> nS;
                lista[a]->set_stock(nS);
                break;
            }else{
                cout << "Valor no valido, ingrese otro\n >";
                cin >> i;
            }
        }
    };
    void dar_baja(){
        cout << "LISTA DE PRODUCTO\n";
        for (int i = 0; i < 10;i++)
            cout << i + 1 << "> " << lista[i]->get_nombre()<<'\n';
        cout << "Cual daremos de baja?\n >";
        int n;
        cin >> n;
        while (true){
            if (n<=10 && n>=1){
                n -= 1;
                int i = 0;
                lista[n]->set_stock(i);
                break;
            }
            else{
                cout << "Fuera de rango, vuelva a intentarlo\n > ";
                cin >> n;
            }
        }
        return;
    };
    void dar_alta(){
        cout << "PRODUCTOS SIN STOCK\n";
        int a{0};
        int pos[10];
        for (int i = 0; i < 10;i++){
            if(lista[i]->get_stock()==0){
                cout << a+1 << ") " << lista[i]->get_nombre() << endl;
                pos[a] = i;
                a++;
            }
        }
        if(a==0){
            cout << " TODOS LOSPRODUCTOS TIENEN STOCK\n ";
            return;
        }
        cout << "Ingrese indice\n > ";
        int b;
        cin >> b;
        while (true){
            if (b>=1&&b<=a+1){
                b--;
                cout << "Cuanto stock se anadira?\n > ";
                int st;
                cin >> st;
                lista[pos[b]]->set_stock(st);
                break;
            }
            else{
                cout << "Fuera de rango\n > ";
                cin >> b;
            }
        }
        return;
    };
    void print(){
        cout << "CODIGO\tPRODUCTO\tPRECIO\tSTOCK\n";
        for (int i = 40; i;i--)
            cout << "_";
        cout << endl;
        for (int i = 0; i < 10;i++){
            lista[i]->imprimir();
        }
        return;
    };
};
int main(){
    srand(time(NULL));

    string pro[10] = {"Chompas", "Chalinas", "Abrigos", "Pantalones", "Camisas", "Guantes", "Medias", "Brasieres", "Polos", "Poleras"};
    double precios[10]={60.99, 13.5, 123.2, 45.2, 32.6, 12.4, 5.5, 19.3, 15, 67.4};
    int stock[10] = {14, 25, 23, 65, 88, 55, 33, 66, 3, 2};
    lista_Pro *estilos = new lista_Pro(pro,precios, stock);
    cout << "-- BIENVENIDO A ESTILOS--\n\n";
    while (true){
        cout << "-MENU-\n";
        cout << " 1) Dar de alta un producto\n";
        cout << " 2) Dar de baja un producto\n";
        cout << " 3) Buscar producto\n";
        cout << " 4) Modificar el nombre, precio o cantidad de un producto dado.\n  Ingresar opcion: ";
        int c{0};
        cin >> c;
        cout << '\n'; 
        while(true){
            if(c==1){
                estilos->dar_alta();
                cout << '\n';
                break;
            }if(c==2){
                estilos->dar_baja();
                cout << '\n';
                break;
            }if(c==3){
                cout << "--Busqueda--\n";
                cout << " 1) X nombre\n";
                cout << " 2) X codigo\n";
                int op2;
                cin >> op2;
                while(true){
                    if(op2==1){
                        cout << "-Ingrese Nombre\n > ";
                        string name;
                        cin >> name;
                        estilos->b_nombre(name);
                        break;
                    }if(op2==2){
                        cout << "-Ingrese Codigo\n > ";
                        int cod;
                        cin >> cod;
                        estilos->b_code(cod);
                        break;
                    }else{
                        cout << "-Fuera de rango\n >";
                        cin >> op2;
                    }
                }
                cout << '\n';
                break;
            }
            if(c==4){
                estilos->modificar();
                cout << '\n';
                break;
            }
            if(c==5){
                estilos->print();
                cout << '\n';
                break;
            }
            else{
                cout << "Fuera de rango\n > ";
                cin >> c;
            }
        }
    }
    estilos->~lista_Pro();
    //cout << p1.get_nombre();
    /*string *producto = new string[10];
    string *codigo = new string[10];
    double *precio = new double[10];
    int *stock = new int[10];

    string producto[3];

    string pro;
    for (int i = 0; i < 10;i++){
        cin >> pro;
        *producto = pro;
        *producto++;
    }
    for (int i = 10; i;i--){
        cout << *producto;
        *producto++;}
    p1.~producto();
    p2.~producto();*/
    return 0;
}