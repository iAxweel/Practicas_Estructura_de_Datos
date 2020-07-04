#include <iostream>
using namespace std;

class Rectangulo{
    private: float base, altura;
    public: Rectangulo(float, float );
        float Perimetro();
        float Area();
};

Rectangulo::Rectangulo(float b, float h) {
    base = b;
    altura = h;
}

float Rectangulo::Perimetro() {
    return (base + altura)*2;
}

float Rectangulo::Area() {
    return base * altura;
}

int main(){
    float base, alt;
    cout<<endl<<endl<<"Ejemplo del suso de clases"<<endl<<endl;
    cout<<"Proporciona la base del rectangulo: "<<endl;
    cin>>base;
    cout<<"Proporciona su altura: "<<endl;
    cin>>alt;
    Rectangulo Rec(base, alt);
    cout<<endl<<"El perimetro del rectangulo es: "<<Rec.Perimetro()<<endl;
    cout<<endl<<"El area del rectangulo es: "<<Rec.Area()<<endl;
}

