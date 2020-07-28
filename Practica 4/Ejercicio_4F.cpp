#include <iostream>
using namespace std;

int Div(int a, int b){
    if (a < b) return 0;
    else return 1 + Div(a - b, b);
}

int main(){
    int a, b, res;
    cout<<"Introduce el dividendo: "<<endl; cin>>a;
    do {
        cout<<"Introduce el divisor: "<<endl; cin>>b;
        if (b > 0) break;
    }while (true);
    res = Div(a, b);
    cout<<"La division es: "<<res;
}



