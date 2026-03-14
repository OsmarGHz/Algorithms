#include <bits/stdc++.h>
using namespace std;

void solve(){
    int res=0, n, k;
    cin >> n >> k;
    short wea[n];
    for(int i=0;i<n;i++){
        cin >> wea[i];
    }
    int i=0,maxRecord;
    while (i<n){
        maxRecord=0;
        while(i<n && wea[i]==0){
            i++;
            maxRecord++;
            if(maxRecord==k){ res++; break; }
        }
        i++;
    }
    
    cout << res << "\n";
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) solve();
}