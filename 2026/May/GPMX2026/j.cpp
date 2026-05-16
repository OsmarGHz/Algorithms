#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll modulo = 1000000007;

void solve(){
    int n, pares, impares;
    cin>>n;
    pares = n/2;
    impares = (n+1)/2;
    ll primParte, segParte;
    if(pares==3) primParte=1;
    else if(pares>3){
        primParte = ((1LL*pares*(pares-1)*(pares-2))/6)%modulo;
    }else primParte=0;

    if(impares==2) segParte = pares;
    else if(impares>2){
        segParte = ((1LL * pares * impares*(impares-1))/2)%modulo;
    }else segParte=0;

    cout << (primParte+segParte)%modulo;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}