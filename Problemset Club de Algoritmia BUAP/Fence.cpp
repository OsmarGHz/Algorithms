#include <stdio.h>
using namespace std;

int main(){
    long long int i,n,k,sumAux=0,sumMin=0,indexOfPlank;
    scanf("%lld %lld",&n,&k);
    long long int planks[n];
    for (i = 0; i < k; i++)
    {
        scanf("%lld",&planks[i]);
        sumAux+=planks[i];
    }
    sumMin=sumAux;
    indexOfPlank=1;
    for (i = 0; i < n-k; i++)
    {
        scanf("%lld",&planks[i+k]);
        sumAux = sumAux + planks[i+k] - planks[i];
        if (sumAux<sumMin)
        {
            sumMin=sumAux;
            indexOfPlank=i+2;
        }
    }
    printf("%lld",indexOfPlank);    
}