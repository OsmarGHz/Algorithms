#include <bits/stdc++.h>
using namespace std;

long long fac(int n){
    if((n-1)>1) return n*fac(n-1);
    return n;
}

int main(){
    int n;
    cin>>n;
    cout << fac(n);
}