#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;
    cout<<"Valores multiplos de 3: "<<endl;
    int i = 1;
    while (i < n){
        if (i % 3 == 0){
            cout<<setw(5)<<i<<",";
        }
        i++;
    }

    return 0;
}

