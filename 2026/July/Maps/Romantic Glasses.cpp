#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(){
    int n;
    cin>>n;
    vector<ll> a(n+1),preSum1(n+1), preSum2(n+1);
    map<ll,ll> mapa;
    mapa.emplace(0,0);
    for(int i=1;i<n+1;i++){
        cin>>a[i];
    }

    for(int i=1;i<n+1;i++){
        if(i%2==1){
            preSum1[i]=preSum1[i-1]+a[i];
            preSum2[i]=preSum2[i-1];
        }else{
            preSum1[i]=preSum1[i-1];
            preSum2[i]=preSum2[i-1]+a[i];
        }
        auto it = mapa.find(preSum1[i]-preSum2[i]);
        if(it!=mapa.end()){
            return true;
        }
        mapa.emplace(preSum1[i]-preSum2[i],i);
    }
    return false;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }
}