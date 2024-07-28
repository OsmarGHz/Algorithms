#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    long long n,k,i,sumAux=0,maxsum=0;
    cin >> n >> k;
    long long numeros[n];
    for (i = 0; i < k; i++)
    {
        cin >> numeros[i];
        sumAux+=numeros[i];
    }
    maxsum=sumAux;
    for (i = 0; i < n-k; i++)
    {
        cin >> numeros[i+k];
        sumAux = sumAux - numeros[i] + numeros[i+k];
        if (sumAux>maxsum)
        {
            maxsum=sumAux;
        }
    }
    printf("%lld",maxsum);
}