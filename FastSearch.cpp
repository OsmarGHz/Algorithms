#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    long long int i,n,k;
    scanf("%lld", &n);
    long long int elements[n];
    for (i = 0; i < n; i++){
        scanf("%lld", elements[i]);
    }
    sort(elements,elements+n)
    scanf("%lld", &k);


    for (i = 0; i < k; i++){
        scanf("%lld", elements[i]);
    }
}