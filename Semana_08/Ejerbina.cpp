#include "iostream"
#include "math.h"

using namespace std;
int main(){
    string a{" "};
    cin>> a;
    string b, c;
    cout << a.size();
    int i{0};
    while (a[i]!='.'){
        b.push_back(a[i]);
        i++;
        //cout<<a[i]<<'\n';
    }
    i++;
    //cout<<a[i]<<'\n';
    while (i<=a.size()-1){
        c.push_back(a[i]);
        i++;
        //cout<<a[i]<<'\n';
    }
    cout << c << '\n'<< b;
}