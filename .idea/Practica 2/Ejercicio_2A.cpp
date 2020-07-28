#include <iostream>
using namespace std;

int main(){
    string nombre, frase;
    int edad;
    cout<<"Proporciona tu nombre: "<<endl;
    cin>>nombre;
    cout<<"Te llamas "<<nombre<<endl;
    cout<<nombre<<" dame tu edad: "<<endl;
    cin>>edad;
    edad>21 ? cout<<"Ya estas viejo "<<nombre : cout<<nombre<<", aun eres joven";
    cout<<endl<<"Ahora escribe una frase celebre: ";
    cin.ignore();//Se usa para limpiar el buffer de entrada y poder usar getline
    getline(cin, frase);
    cout<<nombre<<" tu frase es: "<<frase<<endl;

    return 0;
}

