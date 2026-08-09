#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, idealIdx=-1;
    ll minValue=LONG_LONG_MAX;
    cin>>n;
    vector<int> a(n);
    vector<ll> preSum(n+1), sufSum(n+2);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    preSum[0]=0;
    sufSum[n+1]=0;
    
    for(int i=1;i<=n;i++){
        preSum[i]=preSum[i-1]+a[i-1]; //a starts at i=0, presum of i=i-1
    }
    for(int i=n;i>=1;i--){
        sufSum[i]=sufSum[i+1]+a[i-1];
    }
    
    for(int i=1;i<=n;i++){
        if(preSum[i]+sufSum[i]<minValue){
            minValue=preSum[i]+sufSum[i];
            idealIdx=i;
        }
    }
    cout << idealIdx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}