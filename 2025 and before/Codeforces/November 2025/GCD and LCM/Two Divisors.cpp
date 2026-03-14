#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b,x;
    cin>>a>>b;
    if(b%a==0){
        x=(b*b)/a;
    }else{
        x=(a/gcd(a,b))*b; //(a*b)/gcd(a,b);
    }
    cout << x;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    
}