#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

void tabula(double, double, double);
double terminos(double, int);
double factorial(double n);

int main(){
    setlocale(LC_ALL, "");
    double x, error, resultado;
    cout<<"Valor de x: "<<endl;
    cin>>x;
    cout<<"Terminar cuando la diferencia sea: "<<endl;
    cin>>error;

    resultado = exp(x);
    cout<<"ex real = "<<resultado<<endl;

    tabula(resultado, x, error);
    return 0;
}

/*
 Función para tabular la tabla. Hace llamadas a la función term(x, n) para encontrar cada término de la sumatoria.
 */

void tabula(double resul, double x, double error){
    int n = 1;
    double t, sum, e;
    sum = 0;
    cout<<"n\tTermino \tex(Aprox) \tDiferencia"<<endl;
    t = 1;
    sum = sum + t;
    e = abs(resul - sum);
    while(e >= error){
        cout<<fixed;
        cout<<setprecision(4);
        cout<<n<<"\t"<<t<<"\t\t"<<sum<<"\t\t"<<e<<"\t\t"<<endl;
        t = terminos(x, n);
        sum = sum + t;
        e = abs(resul - sum);
        n++;
    }
}

//Función para encontrar cada término de la sumatoria
double terminos(double x, int n){
    return pow(x, n) / factorial(n);
}

//Función para encontrar el factorial de n
double factorial(double n){
    if (n == 0){ //Caso base
        n = 1;
    } else{//Caso general
        n = n * factorial(n - 1);
    }
    return n;
}





