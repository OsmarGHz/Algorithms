#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> preA(n+1);
    //vector<int> preA2(n+1);
    vector<int> a(n);
    for(int i=0;i<=n;i++){
        preA[i]=i;
    }
    preA[r]=preA[l-1];
    for(int i=0;i<n;i++){
        a[i]=preA[i]^preA[i+1];
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    // preA2[0]=0;
    // for(int i=1;i<=n;i++){
    //     preA2[i]=preA2[i-1]^a[i-1];
    // }
    // cout<<"\n";
    // cout<<"\n";
    // for(int i=0;i<=n;i++){
    //     cout<<preA[i] << " ";
    // }
    // cout<<"\n";
    // for(int i=0;i<=n;i++){
    //     cout<<preA2[i] << " ";
    // }
    // cout<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
        cout<<"\n";
    }
}