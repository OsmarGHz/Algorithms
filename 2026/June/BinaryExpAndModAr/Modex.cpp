#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binPowMod(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b>0){
        if(b & 1){
            res = (res*a) % m;
        }
        a = (a*a) % m;
        b = b>>1;
    }
    return res;
}

void solve(){
    ll a,b,m;
    cin>>a>>b>>m;
    cout << binPowMod(a,b,m);
}

int main(){
    int n,temp;
    cin>>n;
    while(n--){
        solve();
        cout << "\n";
    }
    cin>>temp;
}