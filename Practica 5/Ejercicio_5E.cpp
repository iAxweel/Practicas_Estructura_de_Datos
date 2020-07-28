#include <iostream>
#include <time.h>
using namespace std;


void suma(int **a, int n, int m, int &res){
    res += a[n][m];
    if (n > 0 || m > 0) {
        if (m == 0){
            m = 4;
            n--;
        }
        suma(a, n, m - 1, res);
    }
}

int **matriz;

void llenarMatriz(){
    matriz = new int*[4];
    for (int i = 0; i < 4; ++i) {
        matriz[i] = new int[4];
    }

    srand(time(nullptr));
    int randN;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            randN = 10 + rand() % (45 + 15 - 5);
            matriz[i][j] = randN;
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    llenarMatriz();
    int res = 0;
    suma(matriz, 3, 3, res);
    for (int i = 0; i < 4; ++i) {
        delete [] matriz[i];
    }
    delete [] matriz;
    cout<<"La suma de los elementos es: "<<res;
}





