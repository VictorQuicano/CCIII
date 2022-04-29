#include "iostream"
#include "vector"
#include "string"

using namespace std;

int main(){
    string a;
    cout << "Ingresar palabra:\n";
    cin >> a;
    cout << "\n\n";
    cout << "Palabra al reves:\n";
    
    for (int i = a.size(); i>=0 ;i--)
        cout << a[i];
}   