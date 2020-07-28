#include <iostream>
using namespace std;

int fibo(int valor){
    if (valor < 2) return valor;
    else return fibo(valor - 1) + fibo(valor - 2);
}
int main(){
    int valor;
    cout<<"Ingrese el valor: "<<endl;
    cin>>valor;
    for (int i = 1; i <= valor; ++i) {
        cout<<fibo(i)<<", ";
    }

}
