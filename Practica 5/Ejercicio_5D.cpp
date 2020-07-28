#include <iostream>
#include <time.h>
using namespace std;


void minimo(int **a, int n, int m, int &res){
    if (n < 0 && m < 0) res = a[n-1][m-1];
    if (n == 0 && m == 0) {
        if (a[n][m] < res) res = a[n][m];
    } else{
        if (a[n][m] < res) res = a[n][m];
        if (m < 0){
            m = 4;
            n--;
        }
        minimo(a, n, m - 1, res);
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
    int res = 999999;
    minimo(matriz, 3, 3, res);
    for (int i = 0; i < 4; ++i) {
        delete [] matriz[i];
    }
    delete [] matriz;
    cout<<"El minimo es: "<<res;
}



