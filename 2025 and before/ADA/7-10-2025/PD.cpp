#include <iostream>
#include <chrono>
using namespace std;

double pPD(int i,int j){
    double p[i+j][i+j];
    for(int s=1;s<=i+j-1;s++){
        p[s][0]=0; p[0][s]=1;
        for(int k=1;k<=s;k++){
            p[k][s-k+1] = (p[k-1][s-k+1] + p[k][s-k])/2;
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