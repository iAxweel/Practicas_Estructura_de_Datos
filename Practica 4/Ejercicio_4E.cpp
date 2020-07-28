#include <iostream>
using namespace std;

int Mod(int a, int b){
    if (a < b) return a;
    else return Mod(a - b, b);
}

int main(){
    int a, b, res;
    cout<<"Introduce el dividendo: "<<endl; cin>>a;
    do {
        cout<<"Introduce el divisor: "<<endl; cin>>b;
        if (b > 0) break;
    }while (true);
    res = Mod(a, b);
    cout<<"El modulo es: "<<res;
}

