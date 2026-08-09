#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binPowMod(ll & a, ll & b, ll & m){
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

int main(){
    ll b,p,m;
    while(cin>>b>>p>>m){
        cout << binPowMod(b,p,m);
        cout << "\n";
    }
}