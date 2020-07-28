#include <iostream>
using namespace std;

void intercambia(int *, int *);

int main(){
    int a, b;
    cout<<"Ingrese numero a: "<<endl;
    cin>>a;
    cout<<"Ingrse numero b: "<<endl;
    cin>>b;

    cout<<"Valores sin intercambiar: "<<"\nValor a = "<<a<<"\nValor b = "<<b;
    intercambia(&a, &b);
    cout<<"\nValores intercambiados: "<<"\nValor a = "<<a<<"\nValor b = "<<b;
    return 0;
}

void intercambia(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

