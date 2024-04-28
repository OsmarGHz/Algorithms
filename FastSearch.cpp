#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    long long int i=0,n=0,k=0,iL=0,sL=0,mid=0,cToTheLeft=0,cToTheRight=0,res=0;
    scanf("%lld", &n);
    long long int elements[n];
    for (i = 0; i < n; i++){
        scanf("%lld", &elements[i]);
    }
    sort(elements,elements+n);
    scanf("%lld", &k);
    long long int queriesP1[k], queriesP2[k];
    for (i = 0; i < k; i++){
        scanf("%lld %lld", &queriesP1[i], &queriesP2[i]);
        iL=-1;
        sL=n;
        mid=(iL+sL)/2;
        while (sL>iL+1){
            if (queriesP1[i]>elements[mid]){
                iL=mid;
            }else{
                sL=mid;
            }
            mid=(iL+sL)/2;
        }
        cToTheRight=sL; //CLosest to the right, but without the differentiator.
        
        iL=-1;
        sL=n;
        mid=(iL+sL)/2;
        while (sL>iL+1){
            if (queriesP2[i]>=elements[mid]){
                iL=mid;
            }else{
                sL=mid;
            }
            mid=(iL+sL)/2;
        }
        cToTheLeft=sL;
        res=cToTheLeft - cToTheRight;
        printf("%lld ",res);
    }
}