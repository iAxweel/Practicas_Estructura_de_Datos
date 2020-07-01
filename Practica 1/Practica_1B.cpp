#include <iostream>

using namespace std;

class Alumno {
private:
        string nombre;
         int edad;
         char sexo;
         string carrera;
public: Alumno();
        Alumno(string, int, char, string);
        void cambio(string carrera);
        string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int edad);
        char getSexo();
        void setSexo(char sexo);
        string getCarrera();
        void setCarrera(string carrera);
};
Alumno::Alumno(){

}

Alumno::Alumno(string nombre, int edad, char sexo, string carrera){
    this->nombre = nombre;
    this->edad = edad;
    this->sexo = sexo;
    this->carrera = carrera;
}

string Alumno::getNombre() {
    return nombre;
}

void Alumno::setNombre(string) {
    this->nombre = nombre;
}

int Alumno::getEdad() {
    return edad;
}

void Alumno::setEdad(int edad) {
    this->edad = edad;
}

char Alumno::getSexo() {
    return sexo;
}

void Alumno::setSexo(char sexo) {
    this->sexo = sexo;
}

string Alumno::getCarrera() {
    return carrera;
}

void Alumno::setCarrera(string carrera) {
    this->carrera = carrera;
}

void Alumno::cambio(string carrera) {
    this->carrera = carrera;
}

int main(){
    string nombre, carrera;
    int edad;
    char sexo;
    Alumno *misDatos;
    fflush(stdin);
    cout<<"Nombre: "<<endl;
    getline(cin, nombre);
    cout<<"Edad: "<<endl;
    cin>>edad;
    cout<<"Sexo 'm' 'f': "<<endl;
    cin>>sexo;
    cout<<"Carrera: "<<endl;
    cin.ignore();
    getline(cin, carrera);

    cout<<endl;
    misDatos = new Alumno(nombre, edad, sexo, carrera);
    cout<<"Nombre: "<<misDatos->getNombre()<<endl;
    cout<<"Edad: "<<misDatos->getEdad()<<endl;
    cout<<"Sexo: "<<misDatos->getSexo()<<endl;
    cout<<"Carrera: "<<misDatos->getCarrera()<<endl;

    cout<<"\n¿Cambiar de carrera?: "<<endl;
    char res;
    cin>>res;
    if (res == 's'){
        cout<<"Ingresa otra carrera: "<<endl;
        cin.ignore();
        getline(cin, carrera);
        misDatos->cambio(carrera);
        cout<<"Nueva carrera: "<<misDatos->getCarrera()<<endl;
    }
}


