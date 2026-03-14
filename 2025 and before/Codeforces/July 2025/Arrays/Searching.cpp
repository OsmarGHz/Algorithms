#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}