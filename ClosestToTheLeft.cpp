#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    long long n,k,sL,iL,medium,count;
    int founded;
    scanf("%lld %lld",&n,&k);
    long long elements[n],queries[k];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld",&elements[i]);
    }
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld",&queries[i]);
    }
    for (long long i = 0; i < k; i++)
    {
        iL=-1;
        sL=n;
        medium=(iL+sL)/2;
        count=0;
        founded=0;
        while (founded==0 && sL>iL+1)
        {
            if (queries[i]>=elements[medium] && queries[i]<elements[medium+1])
            {
                count=medium+1;
                founded=1;
            }else if (queries[i]<elements[medium] && queries[i]>=elements[medium-1])
            {
                count=medium;
                founded=1;
            }else if (queries[i]<elements[medium] && queries[i]<elements[medium-1])
            {
                sL=medium;
                medium=(iL+sL)/2;
            }else if (queries[i]>elements[medium] && queries[i]>=elements[medium+1])
            {
                iL=medium;
                medium=(iL+sL)/2;
            }
        }
        printf(" %lld",count);
    }
}