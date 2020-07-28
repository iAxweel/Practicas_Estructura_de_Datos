#include <iostream>
using namespace std;

void suma(int a[], int n, int &res){
    res += a[n];
    if (n > 0) suma(a, n - 1, res);
}

void producto(int a[], int n, int &res){
    res *= a[n];
    if (n != 0) producto(a, n - 1, res);
}

void maximo(int a[], int n, int &res){
   if (n == 0) res = a[n - 1];
   if (n > 0){
       if (a[n] > res) res = a[n];
       maximo(a, n - 1, res);
   }
}

int main(){
    int a[10], res;
    char opc;
    cout<<endl<<"Operaciones con los elementos de un arreglo de forma recursiva"<<endl;
    cout<<endl<<"Introduce 10 numeros enteros: "<<endl;
    for (int i = 0; i < 10; ++i) cin>>a[i];
    do {
        cout<<"\n1.- Sumar \n2.- Multiplicar \n3.- Maximo \n4.- Salir \n\nOpcion: "<<endl;
        cin>>opc;
        switch (opc) {
            case '1': res = 0;
                      suma(a, 9, res);
                      cout<<endl<<"La suma de los 10 numeros es: "<<res<<endl;
                      break;
            case '2': res = 1;
                      producto(a, 9, res);
                      cout<<endl<<"El producto de los 10 numeros es: "<<res<<endl;
                      break;
            case '3': res = 0;
                      maximo(a, 9, res);
                      cout<<endl<<"El maximo de los 10 numeros es: "<<res<<endl;
                      break;
        }
    }while (opc != '4');
}

