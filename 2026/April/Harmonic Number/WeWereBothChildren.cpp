#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    vector<int> b(n+1,0);
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=n;j+=a[i]){
            b[j]++;
        }
    }
    sort(b.begin(),b.end());
    cout << b[n];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}