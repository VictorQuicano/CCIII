#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void mayus(string enter)
{
   for (auto p = enter.begin(); enter.end() != p; ++p)
       *p = toupper(*p);
}
class fabrica_motor{
protected:
    double consumo;
    string combustible;
    int rpm;
public:
    virtual void setConsuma(double c) = 0;
    virtual void setCombustible(string c) = 0;
    virtual void setRpm(int r) = 0;
    friend ostream &operator<<(ostream &, const fabrica_motor &);
};
ostream &operator<<(ostream &os, const fabrica_motor &motor){
    os << "- Motor a " << motor.combustible << ", consume " << motor.consumo << "L por kilometro, a " << motor.rpm << "rpm.\n";
    return os;
}

class motor:public fabrica_motor{
public:
    virtual void setConsuma(double c) override{ this->consumo = c; };
    virtual void setCombustible(string c) override{ this->combustible = c; };
    virtual void setRpm(int r) override{ this->rpm = r; };
};
class fabrica_asientos{
protected:
    int num_asi{0};
    string material{"Plastico"};
    bool airbag{false};
public:
    virtual void setNumAsi(int n) = 0;
    virtual void setMate(string t) = 0;
    virtual void setAir(bool b) = 0;
    friend ostream &operator<<(ostream &, const fabrica_asientos &);
};
ostream &operator<<(ostream &os, const fabrica_asientos &asie){
    os << "- Dispone de " << asie.num_asi << " asientos hechos de " << asie.material;
    if(asie.airbag==true){
        os << " con airbag.\n";
        return os;
    }
    os << " sin airbag.\n";
    return os;
}
class asientos:public fabrica_asientos{
public:
    virtual void setNumAsi(int num_asi) override { this->num_asi=num_asi; };
    virtual void setMate(string t) override{
        this->material = t;
    };
    virtual void setAir(bool b) override {
        this->airbag = airbag;
    };
};

class fabrica_carro{
protected:
    string marca;
    bool transmicion;
    int anio_fab;
    string tipo;
    bool vidrios;
    asientos asie;
    motor moto;
public:
    virtual void setMarca(string s) = 0;
    virtual void setTrans(bool t) = 0;
    virtual void setFab(int f) = 0;
    virtual void setTipo(string m) = 0;
    virtual void setvidrios(bool v) = 0;
    virtual void setAsientos(asientos a) = 0;
    virtual void setMotor(motor m) = 0;
    friend ostream &operator<<(ostream &, const fabrica_carro &);
};
ostream &operator<<(ostream &os, const fabrica_carro &carr){
    mayus(carr.tipo);
    mayus(carr.marca);
    os << carr.tipo << " MARCA " << carr.marca;
    if(carr.anio_fab==2022)
        os << " DEL ANIO\n";
    else
        os << " ANIO " << carr.anio_fab << '\n';
    os << "Caracteristicas\n- Transmicion: ";
    if(carr.transmicion==true)
        os << "Automatica.\n";
    else
        os << "Manual.\n";
    os << "- Vidrios Polorizados: ";
    if(carr.vidrios==true)
        os << "SI\n";
    else
        os << "NO\n";
    os << carr.asie << carr.moto;
    return os;
};
class carro:public fabrica_carro{
    virtual void setMarca(string s) override{
        this->marca = s;
    };
    virtual void setTrans(bool t) override{
        this->transmicion = t;
    };
    virtual void setFab(int f){
        this->anio_fab = f;
    };
    virtual void setTipo(string m) override{
        this->tipo = m;
    };
    virtual void setvidrios(bool v) override{
        this->vidrios = v;
    };
    virtual void setAsientos(asientos a) override{
        this->asie = a;
    };
    virtual void setMotor(motor m) override{
        this->moto = m;
    };
};
class director_motor{
    fabrica_motor *motorcin;
public:
    director_motor(fabrica_motor *motorcin) : motorcin(motorcin){};
    virtual void construir(){
        cout << "Ingresar consumo del motor en L:\n > ";
        double c;
        while (true){
            cin >> c;
            if (c<2){
                cout << "Valor NO valido, vuelva a intentarlo\n > ";
            }
            motorcin->setConsuma(c);
            break;
        }
        cout << "Combustible usado por el motor?\n > ";
        string co;
        cin >> co;
        motorcin->setCombustible(co);
        cout << "RPM del motor\n > ";
        int r;
        while (true){
            cin >> r;
            if (r>=200){
                motorcin->setRpm(r);
                break;
            }
            cout << "Las RPM's no pueden ser menores a 200, vuelve a intentarlo\n > ";
        }
    };
};
class director_asientos{
    fabrica_asientos *asientitos;
public:
    director_asientos(fabrica_asientos *asientitos) : asientitos(asientitos){};
    virtual void construir(){
        cout << "Material de los asientos:\n > ";
        string g;
        cin >> g;
        asientitos->setMate(g);
        cout << "Airbag en todos los asientos?:\n[1] SI\n[2] NO\n > ";
        int b;
        while(true){
            cin >> b;
            if (b==1){
                asientitos->setAir(true);
                break;
            }else if (b==2){
                asientitos->setAir(false);
                break;
            }
            else{
                cout << "Valor no valido, vuelve a intentarlo\n > ";
            }
        }
        cout << "Numero de asientos:\n > ";
        while(true){
            cin >> b;
            if (b>6 || b<2){
                cout << "Numero de asientos debe ser:\n- Menor a 7\n- Mayor a 1\n Vuelve a intentarlo\n > ";
            }else{
                asientitos->setNumAsi(b);
                break;
            }
        }
    }
};
class director{
    fabrica_carro *carrito;
public:
    director(fabrica_carro *carrito) : carrito(carrito){};
    void fabricar(){
        cout << "--FABRICA DE AUTOS--\n";
        cout << "Bienvenido, que clase carro vamos a construir?\n > ";
        string t;
        getline(cin, t);
        carrito->setTipo(t);
        cout << "Marca: \n > ";
        getline(cin, t);
        carrito->setMarca(t);
        int a;
        cout << "Anio de fabricacion:\n > ";
        while (true){
            cin >> a;
            if (a<=2022){
                carrito->setFab(a);
                break;
            }
            else{
                cout << "Anio no valido, intentalo de nuevo:\n > ";
            }
        }
        cout << "Transmicion:\n[1] Automatica\n[2] Manual\n > ";
        while(true){
            cin >> a;
            if (a==1){
                carrito->setTrans(true);
                break;
            }else if (a==2){
                carrito->setTrans(false);
                break;
            }
            else{
                cout << "Valor no valido, vuelve a intentarlo\n > ";
            }
        }
        cout << "Vidrios polarizados?:\n[1] SI\n[2] NO\n > ";
        while(true){
            cin >> a;
            if (a==1){
                carrito->setvidrios(true);
                break;
            }else if (a==2){
                carrito->setvidrios(false);
                break;
            }
            else{
                cout << "Valor no valido, vuelve a intentarlo\n > ";
            }
        }
        asientos n_asientos;
        director_asientos direct(&n_asientos);
        direct.construir();
        carrito->setAsientos(n_asientos);
        motor n_motor;
        director_motor direc_m(&n_motor);
        direc_m.construir();
        carrito->setMotor(n_motor);
    };
};
int main(){
    carro n_carro;
    director direc(&n_carro);
    direc.fabricar();
    cout <<"\n--NUEVO CARRO--\n"<<n_carro<<endl;
}