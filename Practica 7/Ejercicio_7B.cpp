#include <iostream>
#include <iomanip>
using namespace std;

struct Persona{
    int Clave;
    string Nombre;
    float Sueldo;
};

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
    void Eliminar(T);
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
        cout<<"Bloque de memoria liberado: "<<sale->info.Clave<<endl;
        delete(sale);
    }
}

template<class T>
void Lista<T>::Insertar(T v) {
    if (Vacia() || ini->info.Clave > v.Clave){
        Nodo<T>*nvo = new Nodo<T>(v);
        nvo->sig = ini;
        ini = nvo;
        cout<<"Se ha insertado al inicio la persona con Clave. "<<v.Clave<<endl;
        Ver();
    } else {
        Nodo<T>*ant, *tmp = ini;
        while (tmp->sig && tmp->info.Clave < v.Clave){
            ant = tmp;
            tmp = tmp->sig;
        }
        if (tmp ->info.Clave == v.Clave) cout<<"La clave "<<v.Clave<<" ya estaba ingresada. "<<endl;
        else{
            Nodo<T> *nvo = new Nodo<T>(v);
            if (tmp->info.Clave < v.Clave){
                nvo->sig = tmp->sig;
                tmp->sig = nvo;
            } else {
                nvo->sig = ant->sig;
                ant->sig = nvo;
            }
            cout<<"Se ha insertado la persona con Clave: "<<v.Clave<<endl;
            Ver();
        }
    }
}

template<class T>
void Lista<T>::Eliminar(T v) {
    Nodo<T> *tmp, *nodo;
    nodo = ini;
    tmp = NULL;
    while (nodo && nodo->info.Clave < v.Clave){
        tmp = nodo;
        nodo = nodo->sig;
    }
    if (!nodo || nodo->info.Clave != v.Clave) cout<<"La Clave "<<v.Clave<<" no existe en la lista. "<<endl;
    else {
        if (nodo == ini) ini = nodo->sig;
        else tmp->sig = nodo->sig;
        delete (nodo);
        cout<<"Se ha eliminado la persona con Clave "<<v.Clave<<endl;
        if (Vacia()) cout<<endl<<"Lista vacia."<<endl;
        else Ver();
    }
}

template<class T>
bool Lista<T>::Vacia() {
    return ini == NULL;
}

template<class T>
void Lista<T>::Ver() {
    Nodo<T>*tmp = ini;
    cout<<endl<<"La lista es: "<<endl;
    while (tmp){
        cout<<setw(5)<<tmp->info.Clave<<setw(18)<<tmp->info.Nombre<<setw(12)<<tmp->info.Sueldo<<endl;
        tmp = tmp->sig;
    }
    cout<<endl;
}

int main(){
    Lista <Persona> lista;
    Persona Fulanito;
    char opc;
    cout<<endl<<"Implementacion de una Lista Ordenada"<<endl;
    do {
        cout<<"\n1.- Insertar\n2.- Eliminar";
        cout<<"\n3.- Ver lista actual\n4.- Salir\n\n Opcion: ";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce la Clave: "<<endl;
                cin>>Fulanito.Clave;
                cout<<endl<<"Introduce el nombre: ";
                cin>>Fulanito.Nombre;
                cout<<endl<<"Introduce el Sueldo: ";
                cin>>Fulanito.Sueldo;
                lista.Insertar(Fulanito);
                break;
            case '2': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else{
                    cout<<endl<<"Introduce la Clave a eliminar: "<<endl;
                    cin>>Fulanito.Clave;
                    lista.Eliminar(Fulanito);
                }
                break;
            case '3': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else lista.Ver();
                break;
        }
    }while (opc!='4');
}




