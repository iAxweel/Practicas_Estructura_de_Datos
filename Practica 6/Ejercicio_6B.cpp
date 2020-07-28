#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Lista_Doble;

template <class T>
class Nodo {
    friend class Lista_Doble<T>;
    private: T info;
             Nodo<T>*ant, *sig;
    public:  Nodo(T);
};

template <class T>
class Lista_Doble{
private: Nodo<T> *ini, *fin;
public: Lista_Doble();
    ~Lista_Doble();
    void Ins_Ini(T);
    void Ins_Fin(T);
    T Eli_Ini();
    T Eli_Fin();
    void Ver();
    void Ver_Inverso();
    bool Vacia();
};

template<class T>
Nodo<T>::Nodo(T v) {
    info = v;
    sig = ant = NULL;
}

template<class T>
Lista_Doble<T>::Lista_Doble(){
    ini = fin = NULL;
}

template<class T>
Lista_Doble<T>::~Lista_Doble(){
    Nodo<T>*sale;
    while (!Vacia()){
        sale = ini;
        ini = ini->sig;
        cout<<"Bloque de memoria liberado: "<<sale->info<<endl;
        delete(sale);
    }
}

template<class T>
void Lista_Doble<T>::Ins_Ini(T v) {
    Nodo <T>*nvo = new Nodo<T>(v);
    if (Vacia()) ini = fin = nvo;
    else {
        nvo->sig = ini;
        ini->ant = nvo;
        ini = nvo;
    }
}

template<class T>
void Lista_Doble<T>::Ins_Fin(T v) {
    Nodo<T>*nvo = new Nodo<T>(v);
    if (Vacia()) ini = fin = nvo;
    else {
        fin->sig = nvo;
        nvo->ant = fin;
        fin = nvo;
    }
}

template<class T>
T Lista_Doble<T>::Eli_Ini() {
    Nodo<T>*sale;
    T val;
    sale = ini;
    if (ini->sig == NULL) ini = fin = NULL;
    else {
        ini = sale->sig;
        ini->ant = NULL;
    }
    val = sale->info;
    delete (sale);
    return val;
}

template<class T>
T Lista_Doble<T>::Eli_Fin() {
    Nodo<T>*sale;
    T val;
    sale = fin;
    if (ini->sig == NULL) ini = fin = NULL;
    else{
        fin = sale->ant;
        fin->sig = NULL;
    }
    val = sale->info;
    delete(sale);
    return val;
}

template<class T>
bool Lista_Doble<T>::Vacia() {
    return ini == NULL;
}

template<class T>
void Lista_Doble<T>::Ver() {
    Nodo<T>*tmp = ini;
    cout<<endl<<"La lista es: ";
    while (tmp){
        cout<<setw(5)<<tmp->info;
        tmp = tmp->sig;
    }
    cout<<endl;
}

template<class T>
void Lista_Doble<T>::Ver_Inverso() {
    Nodo<T>*tmp = fin;
    cout<<endl<<"La lista es: ";
    while (tmp){
        cout<<setw(5)<<tmp->info;
        tmp = tmp->ant;
    }
    cout<<endl;
}

int main(){
    Lista_Doble <int> lista;
    int valor;
    char opc;
    cout<<endl<<"Implementacion de una Lista Doble"<<endl;
    do {
        cout<<"\n1.- Insertar Inicio\n2.- Insertar Final";
        cout<<"\n3.- Eliminar Inicio\n4.- Eliminar Final";
        cout<<"\n5.- Ver lista actual\n6.- Ver lista inversa";
        cout<<"\n7.- Salir\n\nOpcion: ";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce un valor: "<<endl;
                      cin>>valor;
                      lista.Ins_Ini(valor);
                      break;
            case '2': cout<<endl<<"Introduce un valor: ";
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
            case '6': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                      else lista.Ver_Inverso();
                      break;
        }
    }while (opc!='7');
}



