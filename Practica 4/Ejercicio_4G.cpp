#include <iostream>
using namespace std;

int rusa(int A, int B){
    if (A == 1) return B;
    if (A % 2 != 0) return B + rusa(A/2, B*2);
    else return rusa(A/2, B*2);
}

int main(){
    int a, b, res;
    cout<<"Introduce el valor de a: "<<endl; cin>>a;
    cout<<"Introduce el valor de b: "<<endl; cin>>b;
    res = rusa(a, b);
    cout<<"La multiplicacion es: "<<res;
}
