#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve2(int & n, vector<ll> & pre){
    int l,r,k;
    cin>>l>>r>>k;
    ll sumFragment=pre[r]-pre[l-1], diff, diffIdx;
    diffIdx = r-(l-1);
    diff = (k*diffIdx) - sumFragment;
    //cout<<"("<<pre[n]+diff<<")";
    if((pre[n]+diff)%2==1){
        cout << "YES";
    }else cout << "NO";
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<ll> pre(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pre[0]=0;
    for (int i = 1; i <= n; i++){
        pre[i]=pre[i-1]+a[i-1]; //cause a starts from 0
    }
    while(q--){
        solve2(n,pre);
        cout<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}