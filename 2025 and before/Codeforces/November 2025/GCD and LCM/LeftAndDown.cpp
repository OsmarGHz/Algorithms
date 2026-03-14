#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll gcdOfAB = gcd(a,b);
    if(max(a,b)<=k || a==b || (gcdOfAB!=0 && a/gcdOfAB<=k && b/gcdOfAB<=k)){
        cout << 1;
    }else{
        cout << 2;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }
    
}