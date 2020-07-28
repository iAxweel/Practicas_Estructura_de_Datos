#include <iostream>
using namespace std;

int main(){
    int n;
    do {
        cout<<"Ingrese un valor n: "<<endl;
        cin>>n;
        if (n < 0) cout<<"El numero es negativo"<<endl;
        else if (n == 0) cout<<"El numero es cero"<<endl;
        else if (n < 100) cout<<"El numero es menor a 100"<<endl;
        else cout<<"El numero es mayor o igual 100"<<endl;
    }while (n != 0);

    return 0;
}

