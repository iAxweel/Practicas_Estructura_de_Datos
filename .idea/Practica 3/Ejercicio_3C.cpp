#include <iostream>
using namespace std;

struct Cuadrado;

struct Rectangulo{
private: float base, altura;
public:
    Rectangulo(float, float);
    float Perimetro();
    float Area();
    void Convierte(Cuadrado);
};

struct Cuadrado{
    friend struct Rectangulo;
    private: float lado;
    public: Cuadrado(float a) {lado = a;};
};

Rectangulo::Rectangulo(float b, float h) {
    base = b;
    altura = h;
}

void Rectangulo::Convierte(Cuadrado a) {
    base = altura = a.lado;
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
    Cuadrado cuad(lado);
    apu->Convierte(cuad);
    cout<<endl<<"El perimetro del cuadrado es: "<<apu->Perimetro()<<endl;
    cout<<endl<<"El area del cuadrado: "<<apu->Area()<<endl;
}




