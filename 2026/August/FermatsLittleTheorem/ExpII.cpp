#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll binpow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while(b>0){
        if(b & 1) res = (res*a) % m;
        a = (a*a) % m;
        b >>= 1;
    }
    return res;
}

int main(){
    int n;
    ll a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout << binpow(a, binpow(b,c,MOD-1), MOD);
        cout << "\n";
    }
}