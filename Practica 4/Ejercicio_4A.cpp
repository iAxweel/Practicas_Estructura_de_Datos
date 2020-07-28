#include <iostream>
using namespace std;

double potencia(double valor, int p){
    double res;
    if (p == 0) res = 1;
    else res = valor * potencia(valor, p -1);
    return res;
}

int main(){
    double valor, res;
    int p;
    cout<<endl<<"Elevar un numero a una potencia de forma recursiva"<<endl;
    do {
        cout<<endl<<"Introduce el numero (cero para terminar): "<<endl;
        cin>>valor;
        if (valor == 0) break;
        do {
            cout<<"Introduce la potencia (entero no negativo): "<<endl;
            cin>>p;
        }while(p < 0);
        res = potencia(valor, p);
        cout<<endl<<"El resultado es: "<<res<<endl;
    }while(true);
}

