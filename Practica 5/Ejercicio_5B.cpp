#include <iostream>
using namespace std;

int Prod(int N, int M){
    if (M == 1) return N;
    return N + Prod(N, M - 1);
}

int main(){
    int N, M, res;
    cout<<"Introduce el valor de N: "<<endl; cin>>N;
    cout<<"Introduce el valor de M: "<<endl; cin>>M;
    res  = Prod(N, M);
    cout<<"El reultado es: "<<res;
}
