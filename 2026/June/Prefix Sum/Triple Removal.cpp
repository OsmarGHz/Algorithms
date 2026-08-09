#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve2(vector<ll> & preA, int & n){
    if(preA[n]%3==0){
        cout << "-1";
        return;
    }
    int l,r;
    cin>>l>>r;
    cout << preA[r]-preA[l-1];


    //////////////////////////////////INCOMPLETE



}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<ll> preA(n+1);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    preA[0]=0;
    for (int i = 1; i <= n; i++){
        preA[i]=preA[i-1]+a[i-1];
    }

    while(q--){
        solve2(preA,n);
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