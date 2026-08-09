#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,suma=1,mod=(1e9)+7;
    cin>>n;
    for (int i=0; i < n;i++){
        suma=suma<<1;
        suma %= mod;
    }
    cout << suma;
}