#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,q,a,b;
    cin>>n>>q;
    vector<ll> x(n+1),prefix(n+1);
    x[0]=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+x[i];
    }
    while(q--){
        cin>>a>>b;
        cout << prefix[b]-prefix[a-1] << "\n";
    }
}