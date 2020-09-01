#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 5;

template<class T>
class Pila {
    private: T Arreglo[MAX];
             int cima;
    public: Pila();
             void Push(T);
             T Pop(void);
             bool PilaLlena(void);
             bool PilaVacia(void);
             void VerPila(void);
             T ValorCima(void);
};

template<class T>
Pila<T>::Pila() {
    cima = -1;
}

template<class T>
bool Pila<T>::PilaVacia(void) {
    return (cima == -1);
}

template<class T>
bool Pila<T>::PilaLlena(void) {
    return (cima == (MAX - 1));
}

template<class T>
void Pila<T>::Push(T Dato) {
    Arreglo[++cima] = Dato;
}

template<class T>
T Pila<T>::Pop(void) {
    return Arreglo[cima--];
}

template<class T>
void Pila<T>::VerPila(void) {
    int j = cima;
    cout<<endl<<"Indice de la Cima de la pila: "<<cima;
    cout<<endl<<"Los datos contenidos en la pila son: ";
    while (j >= 0) cout<<setw(5)<<Arreglo[j--];
    cout<<endl;
}

template<class T>
T Pila<T>::ValorCima(void) {
    int i = cima;
    return Arreglo[i];
}

int main(void){
    Pila<int> pila;
    char opc;
    int dato;
    cout<<"Implementacion de una pila estatica"<<endl<<endl;
    do {
        cout<<"\nMenu de opciones:";
        cout<<"\n1.- Apilar (Push)\n2.- Desapilar (Pop)\n3.- Ver Pila\n4.- Valor de la cima\n5.- Salir\n";
        cout<<"\nElija una opcion: ";
        cin>>opc;
        switch (opc) {
            case '1': if(pila.PilaLlena()) cout<<"\nLa Pila esta llena.";
                      else{
                          cout<<"\nDame el valor a insertar: ";
                          cin>>dato;
                          pila.Push(dato);
                      }
                      break;
            case '2': if (pila.PilaVacia()) cout<<"\nLa Pila esta vacia\n";
                      else cout<<"El valor extraido es: "<<pila.Pop();
                      break;
            case '3': if (pila.PilaVacia()) cout<<"\nLa Pila esta vacia\n";
                      else pila.VerPila();
                      break;
            case '4': if (pila.PilaVacia()) cout<<"\nLa Pila esta vacia\n";
                      else cout<<"El valor de la cima de la pila es: "<<pila.ValorCima();
                      break;
        }
    }while (opc!='5');
}





