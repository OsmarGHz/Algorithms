#include <bits/stdc++.h>
using namespace std;

int checkAvai(int a, int b, int i){
    int sumDigit=0, iCopy=i;
    while(i!=0){
        sumDigit+=(i%10);
        i /= 10;
    }
    if(sumDigit>=a && sumDigit<=b) return iCopy;
    else return 0;
}

int main(){
    int n,a,b,summation=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        summation+=checkAvai(a,b,i);
    }
    cout << summation;
}