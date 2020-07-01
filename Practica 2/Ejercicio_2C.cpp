#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
/*
 setw() sirve para modificar la longitud de la salida del tamaño declarado en
 el parametro asignado.
 */

template <class t>
void original(t a[]){
    for (int n = 0; n < 5; ++n)cout<<setw(10)<<*(a+n);
}

template <class t>
void sumar(t a[], t val){
    t *p;
    for (int n = 0; n < 5; ++n) {
        p = &a[n];
        cout<<setw(10)<<*p + val;
    }
}

template <class t>
void multiplicar(t a[], t val){
    t *p = a;
    for (int n = 0; n < 5; ++n) {
        cout<<setw(10)<<*p*val;
        p++;
    }
}

template <class t>
void cuadrado(t *p){
    for (int n = 0; n < 5; ++n) cout<<setw(10)<<pow(*(p+n),2);
}

/*
    stringstream se usa para dar entrada a una cadena de caracteres formada
    por numeros enteros.
 */
template <class t>
void procesa(t arr[], t n1, t n2){
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
    t *p = arr;
    cuadrado(p);
}

int main(){
    int arreglo[5];
    cout<<"Procesamiento de enteros\n";
    procesa(arreglo, 10 ,4);
    double arreglo2[5];
    cout<<"\n\nProcesamiento de Dobles\n";
    procesa(arreglo2, 1.5, 2.5);

    return 0;
}