#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // int n;
    // cin>>n;
    // vector<ll> a(n);
    // ll maxi=0;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     maxi = max(maxi,a[i]);
    // }
    // cout << maxi;
    int n;
    cin>>n;
    ll maxi=0,temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        maxi=max(maxi,temp);
    }
    cout << maxi;
}