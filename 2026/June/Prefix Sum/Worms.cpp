#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<ll> & preA){
    int q;
    cin>>q;
    cout << (lower_bound(all(preA), q) - preA.begin());
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<ll> preA(n+1);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    preA[0]=0;
    for (int i = 1; i <= n; i++){
        preA[i]=preA[i-1]+a[i-1];
    }
    
    int m;
    cin>>m;
    while(m--){
        solve(preA);
        cout<<"\n";
    }
    
}