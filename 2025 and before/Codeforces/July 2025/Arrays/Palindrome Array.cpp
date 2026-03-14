#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0, j=n-1;i<n;i++,j--){
        if(a[i]!=a[j]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}