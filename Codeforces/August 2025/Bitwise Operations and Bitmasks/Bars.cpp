#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,p,sum_bars;
    cin>>n>>p;
    vector<ll> bar(p);
    for(int i=0;i<p;i++){
        cin>>bar[i];
    }
    for(int i=(1<<p)-1;i>=0;i--){
        sum_bars=0;
        for(int j=0;j<p;j++){
            if(((i>>j)&1)==1){
                sum_bars+=bar[j];
            }
        }
        if(sum_bars == n){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
    return;
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