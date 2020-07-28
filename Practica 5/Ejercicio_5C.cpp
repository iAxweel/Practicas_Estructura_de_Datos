#include <iostream>
using namespace std;

void Inversa(string &cad){
    if (cad.size() < 2) return;
    char primero = cad[0];
    char ultimo = cad[cad.size() - 1];
    string interna;
    if (cad.size() > 2) {
        interna = cad.substr(1, cad.size() - 2);
        Inversa(interna);
    }
    cad = ultimo + interna + primero;
}

int main() {
    string cad;
    cout << "Introduce una cadena: " << endl;
    getline(cin, cad);
    Inversa(cad);
    cout << cad;
}
