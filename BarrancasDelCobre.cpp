#include <iostream>
using namespace std;
typedef long long int lli;

int main(){
    lli nVistas, longRecorrido, i, bestResult;
    scanf("%lld %lld", &nVistas, &longRecorrido);
    lli vistas[nVistas], emotion[nVistas], difference[nVistas];
    scanf("%lld", &vistas[0]);
    emotion[0] = 0;
    difference[0] = 0;
    for (i = 1; i < nVistas; i++){
        scanf("%lld", &vistas[i]);
        emotion[i] = vistas[i] - vistas[i-1];
        difference[i] = difference[i-1] + emotion[i];
    }
    bestResult = difference[0+(longRecorrido-1)] - difference[0];
    for (i = 1; i <= nVistas-longRecorrido; i++){
        if ((difference[i+(longRecorrido-1)] - difference[i]) > bestResult){
            bestResult = difference[i+(longRecorrido-1)] - difference[i];
        }
    }
    cout << bestResult;
}