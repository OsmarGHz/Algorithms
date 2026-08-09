#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll MOD;

ll binPow(ll a, ll b){
    ll res = 1;
    a %= MOD;
    while(b>0){
        if(b&1) res = (res*a)%MOD;
        a = (a*a) % MOD;
        b = b>>1;
    }
    return res;
}

ll modInverse(ll n){
    return binPow(n, MOD-2);
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n,a,b;
    cin>>a>>b>>n;
    MOD=n;
    cout << ((a%MOD)*(modInverse(b)%MOD))%MOD;
}