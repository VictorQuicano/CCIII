#include <iostream>

using  namespace std;

class LinuxFactory{
public:
    virtual ~LinuxFactory(){};
    virtual string Draw() const = 0;
};
class LinuxButton:public LinuxFactory{
public:
    string Draw() const override{
        return "\nDibujando Button Linux.\n";
    };
};
class LinuxCheckBox:public LinuxFactory{
public:
    string Draw() const override{
        return "\nDibujando Check Box Linux.\n";
    };
};

class WinFactory{
public:
    virtual ~WinFactory(){};
    virtual string Draw() const = 0;
};
class WinButton:public WinFactory{
public:
    string Draw() const override{
        return "\nDibujando Button Windows.\n";
    };
};
class WinCheckBox:public WinFactory{
public:
    string Draw() const override{
        return "\nDibujando Check Box Windows.\n";
    };
};
class MacFactory{
public:
    virtual ~MacFactory(){};
    virtual string Draw() const = 0;
    virtual string draw(const WinFactory &colaborador) const = 0;
};
class MacButton:public MacFactory{
public:
    string Draw() const override{
        return "\nDibujando MacButton.\n";
    };
    string draw(const WinFactory &colaborador) const override{
        const string colabora = colaborador.Draw();
        return "\nMacButton hecho con " + colabora+".\n";
    };
};
class MacCheckBox:public MacFactory{
public:
    string Draw()const override{
        return "\nDibujando MacCheckBox.\n";
    };
    string draw(const WinFactory &colaborador)const override{
        const string colabora = colaborador.Draw();
        return "\nMacButton hecho con " + colabora + ".\n";
    };
};
class GUIFactory{
public:
    virtual WinFactory* CrearControlW() const = 0;
    virtual MacFactory* CrearControlM() const = 0;
    virtual LinuxFactory*  CrearControlL() const = 0;
};
class Button: public GUIFactory{
public:
    WinFactory* CrearControlW() const override{
        return new WinButton();
    };
    MacFactory* CrearControlM() const override{
        return new MacButton();
    };
    LinuxFactory* CrearControlL() const override{
        return new LinuxButton();
    };
};
class CheckBox: public GUIFactory{
public:
    WinFactory *CrearControlW()const override{
        return new WinCheckBox();
    };
    MacFactory *CrearControlM() const override{
        return new MacCheckBox();
    };
    LinuxFactory *CrearControlL() const override{
        return new LinuxCheckBox();
    };
};
void Aplication(const GUIFactory& f, int os){
    if(os==1){
        const WinFactory *app = f.CrearControlW();
        cout << app->Draw();
        delete app;
    }
    if (os==2){
        const MacFactory *app = f.CrearControlM();
        cout << app->Draw();
        delete app;
    };
    if (os==3){
        const LinuxFactory *app = f.CrearControlL();
        cout << app->Draw();
        delete app;
    };
}
int main(){
    cout << "Cliente: Windows ";
    Button *f1 = new Button();
    Aplication(*f1, 1);//1 - Windows
    delete f1;

    cout << endl;

    cout << "Cliente: Mac ";
    Button *f2 = new Button();
    Aplication(*f2, 2);
    delete f2;
    cout << endl;
    
    cout << "Cliente: Linux ";
    Button *f3 = new Button();
    Aplication(*f3, 3);//1 - Windows
    delete f3;


    return 0;  
}
