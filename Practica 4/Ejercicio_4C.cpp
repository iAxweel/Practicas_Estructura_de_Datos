#include <iostream>
using namespace std;

int MCD(int a, int b){
    if (a == b) return a;
    else{
        if (a > b) return MCD(a - b, b);
        else return MCD(a, b - a);
    }
}

int main(){
    int a, b, res;
    do {
        cout<<"Ingrese el valor de a: "<<endl; cin>>a;
        cout<<"Ingrese el valor de b: "<<endl; cin>>b;
        if (a < 0 && b < 0) break;
        res = MCD(a,b);
        cout<<"El MCD es: "<<res<<endl;
    }while (true);


}

