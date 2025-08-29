#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) x.begin(), x.end()
void solve(){
    ll n;
    cin>>n;
    vector<ll> divisors;
    for(ll divider=11,i=10;divider<=n;divider=i+1){
        i*=10;
        if((n%divider)==0){
            //cout << divider << " ";
            divisors.pb(n/divider);
        }
    }
    sort(all(divisors));
    cout << divisors.size();
    if(divisors.size()!=0){
        cout << "\n";
        for(int i=0;i<divisors.size();i++){
            cout << divisors[i] << " ";
        }
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