#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
/*
 setw() sirve para modificar la longitud de la salida del tamaño declarado en
 el parametro asignado.
 */
void original(int a[]){
    for (int n = 0; n < 5; ++n)cout<<setw(10)<<*(a+n);
}

void sumar(int a[], int val){
    int *p;
    for (int n = 0; n < 5; ++n) {
        p = &a[n];
        cout<<setw(10)<<*p + val;
    }
}

void multiplicar(int a[], int val){
    int *p = a;
    for (int n = 0; n < 5; ++n) {
        cout<<setw(10)<<*p*val;
        p++;
    }
}

void cuadrado(int *p){
    for (int n = 0; n < 5; ++n) cout<<setw(10)<<pow(*(p+n),2);
}

/*
    stringstream se usa para dar entrada a una cadena de caracteres formada
    por numeros enteros.
 */
void procesa(int arr[], int n1 = 5, int n2 = 3){
    stringstream ss;
    string cadena;
    cout<<"Dame 5 numeros separados por espacios: "<<endl;
    getline(cin, cadena);
    ss << cadena;
    for (int n = 0; n < 5; ++n) ss>>arr[n];

    cout<<"Los numeros originales son:\n";
    original(arr);
    cout<<"\n\nSumando "<<n1<<" a cada numero tenemos:\n";
    sumar(arr, n1);
    cout<<endl<<endl<<"Multiplicando por "<<n2<<" a cada numero:\n";
    multiplicar(arr, n2);
    cout<<endl<<endl<<"Los cuadrados de cada numero son:\n";
    int *p = arr;
    cuadrado(p);
}

int main(){
    int arreglo[5];
    procesa(arreglo);

    return 0;
}
