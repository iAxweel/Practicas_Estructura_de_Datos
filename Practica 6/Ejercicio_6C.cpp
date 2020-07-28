#include <iostream>
#include <iomanip>

using namespace std;

template<class T>
class Lista_Circular;

template<class T>
class Nodo{
    friend class Lista_Circular<T>;
    private: T info;
             Nodo<T> *sig, *atras;
    public: Nodo(T);
};

template<class T>
class Lista_Circular{
    private: Nodo<T> *ini, *fin;
    public: Lista_Circular();
           ~Lista_Circular();
           void Insertar(T);
           T Eliminar();
           void Ver();
           void Buscar(T);
           bool Vacia();

};

template<class T>
Nodo<T>::Nodo(T v) {
    info = v;
    sig = NULL;
}

template <class T>
Lista_Circular<T>::Lista_Circular(){
    ini = NULL;
    fin = NULL;
}

template<class T>
Lista_Circular<T>::~Lista_Circular(){
    Nodo<T>*sale;
    while (!Vacia() && sale != ini){
        sale = ini;
        ini = ini->sig;
        cout<<"Bloque de memoria liberado: "<<sale->info<<endl;
        delete(sale);
    }
}

template<class T>
void Lista_Circular<T>::Insertar(T v) {
    Nodo <T>*nvo = new Nodo<T>(v);
    if (Vacia()){
        ini = nvo;
        ini->sig = ini;
        fin = ini;
    }
    else {
        fin->sig = nvo;
        nvo->sig = ini;
        fin = nvo;
    }
}

template<class T>
T Lista_Circular<T>::Eliminar() {
    Nodo<T> *tmp = ini;
    Nodo<T> *ant = NULL;
    Nodo<T> *sale = ini;
    bool encontrado = false;
    T val = ini->info;
    do{
        if(tmp->info == val){
            if(tmp == ini){
                ini = ini->sig;
                ini->atras = fin;
                fin->sig = ini;
            }else if(tmp == fin){
                fin = ant;
                fin->sig = ini;
                ini->atras = fin;
            }else{
                ant->sig = tmp->sig;
                tmp->sig->atras = ant;
            }
            encontrado = true;
        }
        ant = tmp;
        tmp = tmp->sig;
    }while(tmp != ini && !encontrado);
    if (ini->sig == NULL && ini ->atras == NULL) ini = NULL;
    ini = sale->sig;
    val = sale->info;
    delete (sale);
    return val;
}

template<class T>
bool Lista_Circular<T>::Vacia() {
    return ini == NULL;
}

template<class T>
void Lista_Circular<T>::Ver() {
    Nodo<T>*tmp = ini;
    cout<<endl<<"La lista es: ";
    do{
        cout<<setw(5)<<tmp->info;
        tmp = tmp->sig;
    }
    while (tmp != ini);
    cout<<endl;
}

template<class T>
void Lista_Circular<T>::Buscar(T v) {
    Nodo<T>*tmp = ini;
    bool band = false;
    T dato = v;
    do{
        if (tmp->info == dato) {
            cout << "Dato " << dato << " encontrado en la lista." << endl;
            band = true;
        }
        tmp = tmp->sig;
    }
    while (tmp != ini && !band);
}

int main(){
    Lista_Circular <int> lista;
    int valor;
    char opc;
    cout<<endl<<"Implementacion de una lista circular"<<endl;
    do {
        cout<<"\n1.- Insertar\n2.- Eliminar";
        cout<<"\n3.- Ver\n4.- Buscar";
        cout<<"\n5.- Salir\n\nOpcion: ";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce un valor: "<<endl;
                cin>>valor;
                lista.Insertar(valor);
                break;
            case '2': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else cout<<endl<<"Se elimino dato: "<<lista.Eliminar()<<endl;
                break;
            case '3': if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else lista.Ver();
                break;
            case '4': cout<<endl<<"Introduce valor a buscar: "<<endl;
                cin>>valor;
                if (lista.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else lista.Buscar(valor);
                break;
        }
    }while (opc!='5');
}










