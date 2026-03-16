#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,gcdActual,lcmActual;
    cin>>n;
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }

    gcdActual = gcd(b[0],b[1]);
    lcmActual = b[0]/gcdActual;
    for (int i = 1; i < n-1; i++){
        gcdActual = gcd(b[i],b[i+1]);
        lcmActual = lcm(lcmActual,b[i]/gcdActual);
    }
    
    cout << lcmActual;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}