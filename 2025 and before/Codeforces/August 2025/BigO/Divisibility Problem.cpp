#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a%b==0){
        cout << 0;
    }else{
        cout << (b*(a/b))+b-a;
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