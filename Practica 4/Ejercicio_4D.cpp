#include <iostream>
using namespace std;

int Cuad(int N){
    if (N == 1) return N;
    else return Cuad(N - 1) + 2*N-1;
}

int main(){
    int valor, res;
    cout<<"Ingrese un valor: "<<endl;  cin>>valor;
    res = Cuad(valor);
    cout<<"El cuadrado de "<<valor<<" es "<<res<<endl;
}

