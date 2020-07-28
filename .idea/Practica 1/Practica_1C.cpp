#include <iostream>
using namespace std;

int main(){
    string texto;
    cout<<"Ingrese una cadena de texto: "<<endl;
    getline(cin, texto);
    cout<<endl;
    for (int i = 0; i < texto.length(); ++i) {
        cout<<"ASCII de "<<texto[i]<<" = "<< static_cast<int>(texto[i])<<endl;
    }
    return 0;
}