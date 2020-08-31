#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Autos;

template <class T>
class Nodo {
    friend class Autos<T>;
private: T info;
    Nodo<T> *sig, *abajo;
public: Nodo(T);
};

template <class T>
class Autos{
private: Nodo<T> *ini;
public: Autos();
    ~Autos();
    void InsertarMarca(T);
    void InsertarModelo(T, T);
    void EliminarMarca(T);
    void EliminarModelo(T, T);
    void Ver();
    int Vacia();
};

template<class T>
Nodo<T>::Nodo(T v) {
    info = v;
    sig = abajo = NULL;
}

template<class T>
Autos<T>::Autos(){
    ini = NULL;
}

template<class T>
Autos<T>::~Autos(){
    Nodo<T>*sale;
    while (!Vacia()){
        sale = ini;
        ini = ini->sig;
        if (sale->abajo){
            Nodo<T> *ant2, *sale2 = sale->abajo;
            while (sale2 != NULL){
                ant2 = sale2;
                sale2 = ant2->sig;
                cout<<"Bloque de memoria liberado, modelo: "<<ant2->info<<" de la marca.";
                cout<<sale->info<<endl;
                delete (ant2);
            }
        }
        cout<<"Bloque de memoria liberado, marca "<<sale->info<<endl;
        delete(sale);
    }
}

template<class T>
void Autos<T>::InsertarMarca(T v) {
    if (Vacia() || ini->info > v){
        Nodo<T>*nvo = new Nodo<T>(v);
        nvo->sig = ini;
        ini = nvo;
        cout<<"Se ha insertado al inicio la marca. "<<v<<endl;
    } else {
        Nodo<T>*ant, *tmp = ini;
        while (tmp->sig && tmp->info < v){
            ant = tmp;
            tmp = tmp->sig;
        }
        if (tmp ->info == v) cout<<"La marca "<<v<<" ya estaba ingresada. "<<endl;
        else{
            Nodo<T> *nvo = new Nodo<T>(v);
            if (tmp->info < v){
                nvo->sig = tmp->sig;
                tmp->sig = nvo;
            } else {
                nvo->sig = ant->sig;
                ant->sig = nvo;
            }
            cout<<"Se ha insertado la marca: "<<v<<endl;
        }
    }
    Ver();
}

template<class T>
void Autos<T>::InsertarModelo(T v, T m) {
    Nodo<T>*tmp = ini;
    while (tmp->sig && tmp->info < v) tmp = tmp->sig;
    if (tmp->info == v){
        if (!tmp->abajo || tmp->abajo->info > m){
            Nodo<T>*nvo = new Nodo<T>(m);
            nvo->sig = tmp->abajo;
            tmp->abajo = nvo;
            cout<<"Se ha insertado el modelo "<<m<<" a la marca: "<<v<<endl;
        } else{
            Nodo<T>*ant2, *tmp2 = tmp->abajo;
            while (tmp2->sig && tmp2->info < m){
                ant2 = tmp2;
                tmp2 = tmp2->sig;
            }
            if (tmp2->info == m) cout<<"El modelo "<<m<<" de la marca "<<v<< " ya esta.\n";
            else{
                Nodo<T>*nvo = new Nodo<T>(m);
                if (tmp2->info < m){
                    nvo->sig = tmp2->sig;
                    tmp2->sig = nvo;
                } else{
                    nvo->sig = ant2->sig;
                    ant2->sig = nvo;
                }
                cout<<"Se ha insertado el modelo: "<<m<<" a la marca: "<<v<<endl;
            }
        }
    } else cout<<"No existe la marca "<<v<<endl;
    Ver();
}

template<class T>
void Autos<T>::EliminarMarca(T v) {
    Nodo<T>*tmp, *nodo;
    nodo = ini;
    tmp = NULL;
    while (nodo && nodo->info < v){
        tmp = nodo;
        nodo = nodo->sig;
    }
    if (!nodo || nodo->info != v) cout<<"La marca "<<v<<" no existe en la lista. "<<endl;

    else{
        if (nodo == ini) ini = nodo->sig;
        else tmp->sig = nodo->sig;
        if (nodo->abajo){
            Nodo<T>*ant2, *tmp2 = nodo->abajo;
            while (tmp2 != NULL){
                ant2 = tmp2;
                tmp2 = ant2->sig;
                cout<<"Se ha eliminado el modelo: "<<ant2->info<<" de la marca: "<<v<<endl;
                delete (ant2);
            }
        }
        delete (nodo);
        cout<<"Se ha eliminado la marca: "<<v<<endl;
        if (Vacia()) cout<<endl<<"Lista vacia."<<endl;
    }
    Ver();
}

template<class T>
void Autos<T>::EliminarModelo(T v, T m) {
    Nodo<T>*tmp, *nodo;
    nodo = ini;
    tmp = NULL;
    while (nodo && nodo->info < v){
        tmp = nodo;
        nodo = nodo->sig;
    }
    if (!nodo || nodo->info != v) cout<<"La marca "<<v<<" no existe en la lista. "<<endl;
    else{

        if (tmp->info == v){
            if (tmp->abajo || tmp->abajo->info < m){
                if (nodo == ini) ini = nodo->sig;
                else tmp->sig = nodo->sig;
                if (nodo->abajo){
                    Nodo<T>*ant2, *tmp2 = nodo->abajo;
                    if (tmp2->info != m) cout<<"El modelo "<<m<<" de la marca "<<v<< " no existe.\n";
                    else{
                        while (tmp2 != NULL){
                            ant2 = tmp2;
                            tmp2 = ant2->sig;
                            cout<<"Se ha eliminado el modelo: "<<ant2->info<<" de la marca: "<<v<<endl;
                            delete (ant2);
                        }
                    }
                }
                if (Vacia()) cout<<endl<<"Lista vacia."<<endl;
            }
        }
    }
    Ver();
}

template<class T>
int Autos<T>::Vacia() {
    return ini == NULL;
}

template<class T>
void Autos<T>::Ver() {
    Nodo<T>*tmp = ini;
    cout<<endl<<"La lista es: ";
    while (tmp){
        cout<<endl<<"MARCA: "+tmp->info<<"\n";
        if (tmp->abajo != NULL){
            Nodo<T> *tmp2 = tmp->abajo;
            while (tmp2){
                cout<<" MODELO: "+tmp2->info<<"\n";
                tmp2 = tmp2->sig;
            }
        } else cout<<"  No tiene modelos"<<endl;
        tmp = tmp->sig;
    }
    cout<<endl;
}

int main(){
    Autos <string> miauto;
    string nombre, modelo;
    char opc;
    cout<<endl<<"Implementacion de una Lista Multinivel"<<endl;
    do {
        cout<<"\n1.- Insertar Marca\n2.- Insertar Modelo a una Marca";
        cout<<"\n3.- Eliminar Marca y sus modelos\n4.- Eliminar un Modelo";
        cout<<"\n5.- Ver lista actual\n6.- Salir\n\nOpcion";
        cin>>opc;
        switch (opc) {
            case '1': cout<<endl<<"Introduce una Marca: "<<endl;
                cin>>nombre;
                miauto.InsertarMarca(nombre);
                break;
            case '2': if (miauto.Vacia()) cout<<endl<<"Lista vacia. Inserte primero una marca."<<endl;
                else {
                    cout<<endl<<"Indica primero la Marca: ";
                    cin>>nombre;
                    cout<<endl<<"Indica ahora el Modelo: ";
                    cin>>modelo;
                    miauto.InsertarModelo(nombre, modelo);
                }
                break;
            case '3': if (miauto.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else{
                    cout<<endl<<"Introduce la marca a eliminar: ";
                    cin>>nombre;
                    miauto.EliminarMarca(nombre);
                }
                break;
            case '4':if (miauto.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else{
                    cout<<endl<<"Indica primero la Marca: ";
                    cin>>nombre;
                    cout<<endl<<"Indica ahora el Modelo: ";
                    cin>>modelo;
                    miauto.EliminarModelo(nombre, modelo);
                }
                break;
            case '5': if (miauto.Vacia()) cout<<endl<<"Lista vacia."<<endl;
                else miauto.Ver();
                break;
        }
    }while (opc!='6');
}





