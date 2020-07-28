#include <iostream>
#include <cmath>
using namespace std;

struct Cilindro;

struct Circulo{
    private: double radio;
    public: Circulo(double radio);
            double Perimetro();
            double Area();
};

Circulo *c;

struct Cilindro{
    friend struct Circulo;
    private: double radio, altura;
    public: Cilindro(double r, double alt){radio = r, altura = alt;};
            double Volumen();
            double Superficie();
};

Circulo::Circulo(double r) {
    radio = r;
}

double Circulo::Perimetro(){
    return 2 * M_PI * radio;
}

double Circulo::Area() {
    return M_PI * pow(radio, 2);
}

double Cilindro::Volumen() {
    c = new Circulo(radio);
    return  c->Area() * altura;
}

double Cilindro::Superficie() {
    c = new Circulo(radio);
    return 2 * c->Area() + altura * c->Perimetro();
}

int main(){
    double radio, altura;
    cout<<"Ingrese el radio: "<<endl;
    cin>>radio;
    cout<<"Ingrese la altura: "<<endl;
    cin>>altura;

    Cilindro *cil;
    cil = new Cilindro(radio, altura);
    cout<<"La superficie del cilindro es: "<<cil->Superficie()<<endl;
    cout<<"El volumen del cilindro es: "<<cil->Volumen();
}





