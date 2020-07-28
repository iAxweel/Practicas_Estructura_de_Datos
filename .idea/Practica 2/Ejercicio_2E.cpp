#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;
    cout<<"Valores multiplos de 3: "<<endl;

    for (int i = 1; i < n; ++i) {
        if (i % 3 == 0){
            cout<<setw(5)<<i<<",";
        }
    }

    return 0;
}

