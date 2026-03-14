#include <iostream>
#include <chrono>
using namespace std;

double pPD(int i,int j){
    double p[i+1][j+1];
    for(int a=1;a<=i;a++){
        p[a][0] = 0;
    }
    for(int b=1;b<=j;b++){
        p[0][b] = 1;
    }
    for(int a=1;a<=i;a++){
        for(int b=1;b<=j;b++){
            p[a][b]=(p[a-1][b] + p[a][b-1])/2;
        }
    }
    return p[i][j];
}

int main(){
    int M,N;
    cin>>M>>N;
    auto start = chrono::high_resolution_clock::now();
    cout << pPD(M,N);
    //cout << "\nTiempo: " << chrono::duration<double, milli>(chrono::high_resolution_clock::now() - start).count() << " ms" << endl;
    auto end = chrono::high_resolution_clock::now(); // Después de la línea 18
    chrono::duration<double, milli> elapsed = end - start;
    cout << "Tiempo: " << elapsed.count() << " ms" << endl;
    return 0;
}