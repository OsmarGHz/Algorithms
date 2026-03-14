#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,nOnes=0,nRes=0;
    cin>>n;
    while(n!=0){
        if(n%2==1) nOnes++;
        n/=2;
    }
    for(int i=1;nOnes>0;i*=2,nOnes--){
        nRes+=i;
    }
    cout << nRes;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}