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
            void Ins_Ini(T);
            void Ins_Fin(T);
            T Eli_Ini();
            T Eli_Fin();
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
    while (!Vacia()){
        sale = ini;
        ini = ini->sig;
        cout<<"Bloque de memoria liberado: "<<sale->info<<endl;
        delete(sale);
    }
}

template<class T>
void Lista<T>::Ins_Ini(T v) {
    Nodo <T>*nvo = new Nodo<T>(v);
    nvo->sig = ini;
    ini = nvo;
}

template<class T>
void Lista<T>::Ins_Fin(T v) {
    Nodo<T>*nvo = new Nodo<T>(v);
    Nodo<T>*tmp;
    if (Vacia()) ini = nvo;
    else {
        tmp = ini;
        while (tmp->sig!=NULL) tmp = tmp->sig;
        tmp->sig = nvo;
    }
}

template<class T>
T Lista<T>::Eli_Ini() {
    Nodo<T>*sale;
    T val;
    sale = ini;
    ini = sale->sig;
    val = sale->info;
    delete (sale);
    return val;
}

template<class T>
T Lista<T>::Eli_Fin() {
    Nodo<T>*sale, *aux;
    T val;
    sale = ini;
    if (ini->sig == NULL) ini = NULL;
    else{
        while (sale->sig != NULL){
            aux = sale;
            sale = sale->sig;
        }
        aux->sig = NULL;
    }
    val = sale->info;
    delete(sale);
    return val;
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

int main(){
    Lista <int> lista;
    int valor;
    char opc;
    cout<<endl<<"Implementacion de una lista simple"<<endl;
    do {
        cout<<"\n1.- Insertar Inicio\n2.- Insertar Final";
        cout<<"\n3.- Eliminar Inicio\n4.- Eliminar Final";
        cout<<"\n5.- Ver lista actual\n6.- Salir\n\nOpcion: ";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce un valor: "<<endl;
                      cin>>valor;
                      lista.Ins_Ini(valor);
                      break;
            case '2': cout<<endl<<"Introduce un valor: "<<endl;
                      cin>>valor;
                      lista.Ins_Fin(valor);
                      break;
            case '3': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                      else cout<<endl<<"Se elimino dato: "<<lista.Eli_Ini()<<endl;
                      break;
            case '4': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                      else cout<<endl<<"Se elimino dato: "<<lista.Eli_Fin()<<endl;
                      break;
            case '5': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                      else lista.Ver();
                      break;
        }
    }while (opc!='6');
}

