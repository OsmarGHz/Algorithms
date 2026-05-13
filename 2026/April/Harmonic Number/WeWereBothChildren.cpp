#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solve(){
    int n,maxi=0;
    cin>>n;
    vector<int> a(n), frecuencias(n+1,0);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        if(a[i]<=n){
            frecuencias[a[i]]++;
        }
    }
    vector<int> b(n+1,0);
    for(int i=1;i<=n;i++){
        if(frecuencias[i]!=0){
            for(int j=i;j<=n;j+=i){
                b[j]+=frecuencias[i];
                if(b[j]>maxi){
                    maxi=b[j];
                }
            }
        }
    }
    cout << maxi;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}