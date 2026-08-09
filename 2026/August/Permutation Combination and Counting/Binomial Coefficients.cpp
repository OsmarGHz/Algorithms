#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD =1e9+7;
vector<ll> factoriales(1e6+1);

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

ll nCr(ll n, ll r){
    if(r<0 || r>n){
        return 0;
    }
    return factoriales[n] * modInverse(factoriales[r])%MOD * modInverse(factoriales[n-r])%MOD;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n,a,b;
    cin>>n;
    
    factoriales[0]=1;
    for (ll i = 1; i < 1e6+1; i++){
        factoriales[i] = (factoriales[i-1]*i)%MOD;
    }
    
    for (ll i=0; i < n;i++){
        cin>>a>>b;
        cout << nCr(a,b) << "\n";
    }
}