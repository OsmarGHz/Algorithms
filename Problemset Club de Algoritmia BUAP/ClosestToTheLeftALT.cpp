//Warning: this program gives the answer in index from 0 to n-1 (computer-like)

#include <iostream>
using namespace std;

int main(){
    long long n,k,sL,iL,medium;
    scanf("%lld %lld",&n,&k);
    long long elements[n],queries[k];
    for (long long i = 0; i < n; i++){
        scanf("%lld",&elements[i]);
    }
    for (long long i = 0; i < k; i++){
        scanf("%lld",&queries[i]);
    }
    for (long long i = 0; i < k; i++){
        iL=0;
        sL=n-1;
        while (iL<=sL){
            medium=(iL+sL)/2;
            if (queries[i]>=elements[medium]){
                iL=medium+1;
            }else{
                sL=medium-1;
            }
        }
        printf(" %lld",sL);
    }
}