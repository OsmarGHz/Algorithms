#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,minSum=INT_MAX;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            minSum=min(minSum,a[i]+a[j]+j-i);
        }
    }
    cout << minSum;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}