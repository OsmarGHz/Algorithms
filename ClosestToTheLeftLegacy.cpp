//Remember: this code gives the answer in the human-based system position for arrays.
//Example, in {1,2,3}, position[0] for the computer, is the position[1] for humans.
//It prints position[0] for humans (position[-1] for the computer, which also doesn´t exist) if there aren't elements "NOT GREATER THAN TARGET"

#include <iostream>
#include <stdio.h>
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
        iL=-1;
        sL=n;
        medium=(iL+sL)/2;
        while (sL>iL+1)
        {
            if (queries[i]>=elements[medium])
            {
                iL=medium;
                medium=(iL+sL)/2;
            }else{
                sL=medium;
                medium=(iL+sL)/2;
            }
        }
        printf(" %lld",sL);
    }
}