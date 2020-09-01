#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 5;

template<class T>
class ColaCircular {
private: T Arreglo[MAX];
    int Frente, Final;
public: ColaCircular();
    void Put(T);
    T Get(void);
    bool ColaLlena(void);
    bool ColaVacia(void);
    void VerCola(void);
    T ValorFrente(void);
};

template<class T>
ColaCircular<T>::ColaCircular() {
    Frente = Final = 0;
}

template<class T>
bool ColaCircular<T>::ColaVacia(void) {
    return (Frente == Final);
}

template<class T>
bool ColaCircular<T>::ColaLlena(void) {
    return ((Final + 1) % MAX == Frente);
}

template<class T>
void ColaCircular<T>::Put(T Dato) {
    Arreglo[Final] = Dato;
    Final = (Final + 1) % MAX;
}

template<class T>
T ColaCircular<T>::Get(void) {
    T sale = Arreglo[Frente];
    Frente = (Frente + 1) % MAX;
    return sale;
}

template<class T>
void ColaCircular<T>::VerCola(void) {
    int i = Frente;
    cout<<endl<<"Indice de inicio: "<<Frente<<" y de Final: "<<Final;
    cout<<endl<<"Los datos contenidos en la cola son: ";
    while (i != Final){
        cout<<setw(5)<<Arreglo[i];
        i = (i + 1) % MAX;
    }
}

template<class T>
T ColaCircular<T>::ValorFrente() {
    int i = Frente;
    return Arreglo[i];
}

int main(void){
    ColaCircular<int> cola;
    char opc;
    int dato;
    cout<<"Implementacion de una cola estatica"<<endl<<endl;
    do {
        cout<<"\nMenu de opciones:";
        cout<<"\n1.- Entrar a la cola (Put)\n2.- Salir de la cola (Get)\n3.- Ver Cola\n4.- Valor frente\n5.- Salir\n";
        cout<<"\nElija una opcion: ";
        cin>>opc;
        switch (opc) {
            case '1': if(cola.ColaLlena()) cout<<"\nLa Pila esta llena.";
                else{
                    cout<<"\nDame el valor a insertar: ";
                    cin>>dato;
                    cola.Put(dato);
                }
                break;
            case '2': if (cola.ColaVacia()) cout<<"\nLa Pila esta vacia\n";
                else cout<<"El valor extraido es: "<<cola.Get();
                break;
            case '3': if (cola.ColaVacia()) cout<<"\nLa Cola esta vacia\n";
                else cola.VerCola();
                break;
            case '4': if (cola.ColaVacia()) cout<<"\nLa cola esta vacia\n";
                else cout<<"El valor que se encuentra en frente es: "<<cola.ValorFrente();
                break;
        }
    }while (opc!='5');
}






