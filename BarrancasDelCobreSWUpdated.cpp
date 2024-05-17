#include <iostream>
using namespace std;
typedef long long int lli;

int main(){
    lli nVistas, longRecorrido, i, bestResult, currentSuma;
    scanf("%lld %lld", &nVistas, &longRecorrido);
    lli vistas[nVistas];
    scanf("%lld", &vistas[0]);
    currentSuma = 0;
    for (i = 1; i < longRecorrido; i++){
        scanf("%lld", &vistas[i]);
        currentSuma+= vistas[i] - vistas[i-1];
    }
    bestResult = currentSuma;
    for (; i < nVistas; i++){
        scanf("%lld", &vistas[i]);
        currentSuma += vistas[i] - vistas[i-1];
        currentSuma -= vistas[i-longRecorrido+1] - vistas[i-longRecorrido];
        if (currentSuma>bestResult){
            bestResult = currentSuma;
        }
    }
    cout << bestResult;
}