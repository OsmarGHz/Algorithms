#include <iostream>
using namespace std;
typedef long long int lli;

int main(){
    lli nVistas, longRecorrido, i, bestResult, currentSuma;
    scanf("%lld %lld", &nVistas, &longRecorrido);
    lli vistas[nVistas], emotion[nVistas];
    scanf("%lld", &vistas[0]);
    emotion[0] = 0;
    for (i = 1; i < nVistas; i++){
        scanf("%lld", &vistas[i]);
        emotion[i] = vistas[i] - vistas[i-1];
    }
    bestResult = 0;
    for (i = 0; i < longRecorrido; i++){
        bestResult += emotion[i];
    }
    currentSuma = bestResult;
    for (; i < nVistas; i++){
        currentSuma += emotion[i];
        currentSuma -= emotion[i-longRecorrido+1];
        if (currentSuma>bestResult){
            bestResult = currentSuma;
        }
    }
    cout << bestResult;
}