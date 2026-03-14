#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b,gcdV;
    cin>>a>>b;
    if(a==b){
        gcdV = a;
    }else{
        int diff = min(a,min(b,abs(a-b)));
        for (int i = diff; i >= 1; i--){
            if(a%i==0 && b%i == 0){
                gcdV = i;
                break;
            }
        }
    }
    cout << (ll(a)*b)/gcdV << " " << gcdV;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}