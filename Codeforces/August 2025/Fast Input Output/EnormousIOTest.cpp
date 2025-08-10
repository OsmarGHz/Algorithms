#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll a,b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout << ll(a)*b << "\n";
    }
}