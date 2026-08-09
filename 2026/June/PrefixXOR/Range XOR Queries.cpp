#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<ll> & preXorA, int & n){
    int a,b;
    cin>>a>>b;
    cout << (preXorA[b] ^ preXorA[a-1]);
}

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<ll> preXorA(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    preXorA[0]=0;
    for(int i=1;i<=n;i++){
        preXorA[i]=preXorA[i-1]^a[i-1];
    }

    while(q--){
        solve(preXorA,n);
        cout<<"\n";
    }
}