#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll l,r,a,b;
    cin>>l>>r;
    a=l;
    b=a*2;
    if(b>r){
        a = -1;
        b = -1;
    }
    cout << a << " " << b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}