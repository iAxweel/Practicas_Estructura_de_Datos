#include <iostream>
#include <iomanip>
using namespace std;

class PilaChar{
    private: string pila;
    public: PilaChar() { pila = "";};
    void Push(char v) { pila = v + pila; };
    char Pop();
    char VerCima() { return pila[0]; };
    void Ver() { cout<<endl<<"La pila es: "<<pila<<endl; };
    bool Vacia() { return pila == "";};
};

char PilaChar::Pop() {
    char val = pila[0];
    pila = pila.substr(1);
    return val;
}

void Invierte(string V) {
    PilaChar pila;
    for (int i = 0; i < V.size(); ++i)
        pila.Push(V[i]);
    pila.Ver();
    V = "";
    while (!pila.Vacia())
        V+=pila.Pop();
    cout<<"La cadena inversa es: "<<V<<endl;
}

void IdentificaPal(string V){
    PilaChar pila;
    for (int i = 0; i < V.size(); i++)
        if (V[i] != ' ') pila.Push(V[i]);
    pila.Ver();
    for (int i = 0; i < V.size(); i++)
        if (V[i] != ' ')
            if (V[i] != pila.Pop()){
                cout<<V<<" no es palindroma."<<endl;
                return;
            }
    cout<<V<<" si es palindroma."<<endl;
}

void Balanceados(string V){
    PilaChar pila;
    for (int i = 0; i < V.size(); i++)
        if (V[i] == '(') pila.Push('X');
    for (int i = 0; i < V.size(); i++){
        if (V[i] == ')' && pila.Vacia()) {
            cout<<"No estan balanceados."<<endl;
            return;
        }
        if (V[i] == ')') pila.Pop();
    }
    if (pila.Vacia()) cout<<"Si estan balanceados, la pila esta vacia."<<endl;
    else {
        cout<<"No estan balanceados.";
        pila.Ver();
    }
}

void CerosyUnos(string V){
    PilaChar pila;
    for (int i = 0; i < V.size(); ++i)
        if (V[i] == '0') pila.Push('X');
    for (int i = 0; i < V.size(); ++i){
        if (V[i] == '1' && pila.Vacia()) {
            cout<<"La cantidad de ceros es menor a la de unos."<<endl;
            return;
        }
        if (V[i] == '1') pila.Pop();
    }
    if (pila.Vacia()) cout<<"La cantidad de ceros es igual a la de unos."<<endl;
    if (!pila.Vacia()) {
        cout<<"La cantidad de ceros es mayor que la de unos."<<endl;
        pila.Ver();
    }
}

int main(void){
    string V;
    char opc;
    cout<<"\nUsando una cadena como Pila de caracteres.\n\n";
    do {
        cout<<"\n1.- Inversa de una cadena.\n2.- Identificar si es palindroma.";
        cout<<"\n3.- Identificar parentesis balanceados.\n4.- Cantidad de ceros y de unos.\n5.- Salir\n\n";
        cout<<"Opcion: ";
        cin>>opc;
        if (opc != '5'){
            cout<<endl<<endl<<"Introduce una cadena: ";
            cin.ignore();
            getline(cin, V);
        }
        switch (opc) {
            case '1': cout<<endl<<"Invirtiendo la cadena."<<endl;
                      Invierte(V);
                      break;
            case '2': cout<<endl<<"Identificando si es palindroma."<<endl;
                      IdentificaPal(V);
                      break;
            case '3': cout<<endl<<"Verificando parentesis balanceados."<<endl;
                      Balanceados(V);
                      break;
            case '4': cout<<endl<<"Cantidad de ceros y de unos."<<endl;
                      CerosyUnos(V);
                      break;
        }
    }while (opc != '5');
}

