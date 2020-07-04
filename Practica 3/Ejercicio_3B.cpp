#include <iostream>
using namespace std;

class Rectangulo{
private: float base, altura;
public: Rectangulo(float);
        Rectangulo(float, float );
        float Perimetro();
        float Area();
};

Rectangulo::Rectangulo(float a) {
    base = altura = a;
}

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
    float base, alt, lado;
    cout<<endl<<endl<<"Ejemplo del suso de clases"<<endl<<endl;
    cout<<"Proporciona la base del rectangulo: "<<endl;
    cin>>base;
    cout<<"Proporciona su altura: "<<endl;
    cin>>alt;
    Rectangulo *apu;
    apu = new Rectangulo (base, alt);
    cout<<endl<<"El perimetro del rectangulo es: "<<apu->Perimetro()<<endl;
    cout<<endl<<"El area del rectangulo es: "<<apu->Area()<<endl;
    cout<<endl<<"Proporciona un lado de un cuadrado: ";
    cin>>lado;
    apu = new Rectangulo(lado);
    cout<<endl<<"El perimetro del cuadrado es: "<<apu->Perimetro()<<endl;
    cout<<endl<<"El area del cuadrado: "<<apu->Area()<<endl;
}


