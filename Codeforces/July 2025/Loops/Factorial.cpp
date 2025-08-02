#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    ll res=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        res*=i;
    }
    cout << res;
}

void newSolve(vector<ll> & a){
    int n;
    cin>>n;
    cout << a[n];
}

int main(){
    int t;
    cin>>t;
    
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }

    vector<ll> a(21);
    a[0]=1;
    a[1]=1;
    for (int i = 2; i < 21; i++){
        a[i] = i * a[i-1];
    }
    while(t--){
        newSolve(a);
        cout << "\n";
    }
}