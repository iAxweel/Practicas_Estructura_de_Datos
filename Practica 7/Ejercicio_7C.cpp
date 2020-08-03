#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Lista;

template <class T>
class Nodo {
    friend class Lista<T>;
private: T info;
    Nodo<T> *sig;
public: Nodo(T);
};

template <class T>
class Lista{
private: Nodo<T> *ini;
public: Lista();
    ~Lista();
    void Insertar(T);
    void Unir(Lista L1, Lista L2);
    void Ver();
    bool Vacia();
};


template<class T>
Nodo<T>::Nodo(T v) {
    info = v;
    sig = NULL;
}

template<class T>
Lista<T>::Lista(){
    ini = NULL;
}

template<class T>
Lista<T>::~Lista(){
    Nodo<T>*sale;
    while (!Vacia() && sale != ini){
        sale = ini;
        ini = ini->sig;
        cout<<"Bloque de memoria liberado: "<<sale->info<<endl;
        delete(sale);
    }
}

template<class T>
void Lista<T>::Insertar(T v) {
    if (Vacia() || ini->info > v){
        Nodo<T>*nvo = new Nodo<T>(v);
        nvo->sig = ini;
        ini = nvo;
        cout<<"Se ha insertado al inicio el valor. "<<v<<endl;
        Ver();
    } else {
        Nodo<T>*ant, *tmp = ini;
        while (tmp->sig && tmp->info < v){
            ant = tmp;
            tmp = tmp->sig;
        }
        if (tmp ->info == v) cout<<"El valor "<<v<<" ya estaba ingresado. "<<endl;
        else{
            Nodo<T> *nvo = new Nodo<T>(v);
            if (tmp->info < v){
                nvo->sig = tmp->sig;
                tmp->sig = nvo;
            } else {
                nvo->sig = ant->sig;
                ant->sig = nvo;
            }
            cout<<"Se ha insertado el valor: "<<v<<endl;
            Ver();
        }
    }
}


template<class T>
bool Lista<T>::Vacia() {
    return ini == NULL;
}

template<class T>
void Lista<T>::Ver() {
    Nodo<T>*tmp = ini;
    cout<<endl<<"La lista es: ";
    while (tmp){
        cout<<setw(5)<<tmp->info;
        tmp = tmp->sig;
    }
    cout<<endl;
}

template<class T>
void Lista<T>::Unir(Lista L1, Lista L2) {
    Nodo<T> *sig_nodo, *ant_nodo, *pptr, *qptr;
    T dato;
    pptr = L1.ini;
    qptr = L2.ini;
    ini = sig_nodo = ant_nodo = NULL;
    while (pptr != NULL && qptr != NULL){
        if (pptr->info <= qptr->info){
            dato = pptr->info;
            pptr = pptr->sig;
        } else{
            dato = qptr->info;
            qptr = qptr->sig;
        }
        sig_nodo = new Nodo<T>(dato);
        sig_nodo->info = dato;
        sig_nodo->sig = NULL;
        if (ini == NULL) ini = sig_nodo;
        else ant_nodo->sig = sig_nodo;
        ant_nodo = sig_nodo;
    }
    if (pptr == NULL){
        while (qptr != NULL){
            sig_nodo = new Nodo<T>(dato);
            sig_nodo->info = qptr->info;
            sig_nodo->sig = NULL;
            if (ini == NULL) ini = sig_nodo;
            else ant_nodo->sig = sig_nodo;
            ant_nodo = sig_nodo;
            qptr = qptr->sig;
        }
    } else if(qptr == NULL){
        while (pptr != NULL){
            sig_nodo = new Nodo<T>(dato);
            sig_nodo->info = pptr->info;
            sig_nodo->sig = NULL;
            if (ini == NULL) ini = sig_nodo;
            else ant_nodo->sig = sig_nodo;
            ant_nodo = sig_nodo;
            pptr = pptr->sig;
        }
    }
}

int main(){
    Lista<int> L1, L2;
    int valor;
    char opc;
    cout<<endl<<"Implementacion de una Lista Ordenada"<<endl;
    do {
        cout<<"\n1.- Insertar dato a L1\n2.- Insertar dato a L2";
        cout<<"\n3.- Unir listas\n4.- Salir\n\n Opcion: ";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce un valor: "<<endl;
                cin>>valor;
                L1.Insertar(valor);
                break;
            case '2': cout<<endl<<"Introduce un valor: "<<endl;
                cin>>valor;
                L2.Insertar(valor);
                break;
            case '3':if (L1.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else{
                    L1.Unir(L1, L2);
                    L1.Ver();
                }
                break;
        }
    }while (opc!='4');
}

