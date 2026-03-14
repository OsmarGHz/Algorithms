#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b,diff;
    cin >> a>>b;
    if(a==b){
        cout << "0 0";
    }else{
        diff = abs(a-b);
        cout << diff << " " << min(a%diff,diff-(a%diff));
    }
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