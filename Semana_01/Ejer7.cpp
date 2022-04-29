#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    if(a%b==0)
        cout<<"Son divisibles"<<endl;
    else{
        cout<<"No es divisor"<<endl;
    }
    return 0;
}