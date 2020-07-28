#include <iostream>
#include <cmath>
using namespace std;

class Poligono{
    private: int Num_de_lados;
             double Longitud_del_lado;
    public:  Poligono(int, double );
             double Perimetro();
             double Area();
};

Poligono::Poligono(int lados, double longitud) {
    Num_de_lados = lados;
    Longitud_del_lado = longitud;
}

double Poligono::Perimetro() {
    return Num_de_lados * Longitud_del_lado;
}

double Poligono::Area() {
    return Num_de_lados * pow(Longitud_del_lado, 2) / (4 * tan(M_PI/Num_de_lados));
}

int main(){
    Poligono *pol;
    int num_lados;
    double longitud_lado;
    cout<<"Ingrese numero de lados: "<<endl;
    cin>>num_lados;
    cout<<"Ingrese longitud de los lados: "<<endl;
    cin>>longitud_lado;
    pol = new Poligono(num_lados, longitud_lado);
    cout<<"El perimetro del poligono es: "<<pol->Perimetro()<<endl;
    cout<<"El area del poligono es: "<<pol->Area();

}


