#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

ll solve(){
    int k;
    cin>>k;
    vector<ll> a(k);
    ll sumota=0;
    for (int i = 0; i < k; i++){
        cin>>a[i];
    }

    for (int i = 0; i < k; i++){
        sumota += ll(1)<<(a[i]-1);
    }
    return sumota;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cout << solve() << "\n";
    }
}