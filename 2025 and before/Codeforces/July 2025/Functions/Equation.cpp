#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll exponent(int num, int exp){
    ll res=num;
    for(int i=1;i<exp;i++){
        res*=num;
    }
    return res;
}

int main(){
    int x,n;
    ll res=0;
    cin>>x>>n;
    for(int i=2;i<=n;i+=2){
        //res += exponent(x,i);
        res += pow(x,i);
    }
    cout << res;
}