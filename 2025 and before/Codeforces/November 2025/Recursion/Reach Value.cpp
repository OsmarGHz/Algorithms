#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int reachable(ll n, ll act){
    if(n==act) return 1;
    if(act>n) return 0;
    if(reachable(n,act*10)) return 1;
    return reachable(n,act*20);
}

void solve(){
    ll n;
    cin>>n;
    if(reachable(n,1)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}