#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,preSum=0,power=1;
    cin>>n;
    ll sum=(n*(n+1))/2;
    while(power<=n){
        preSum+=power;
        power*=2;
    }
    sum -= (preSum*2);
    cout << sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}