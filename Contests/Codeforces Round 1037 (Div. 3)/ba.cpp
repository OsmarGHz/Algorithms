#include <bits/stdc++.h>
using namespace std;

void solve(){
    int res=0, n, k,window=0;
    cin >> n >> k;
    short wea[n];
    short canHikeHere[n-k+1];
    for(int i=0;i<n;i++){
        cin >> wea[i];
    }

    for(int i=0;i<k;i++){
        window += wea[i];
    }
    if(window==0) canHikeHere[0] = 1;
    else canHikeHere[0] = 0;

    for(int i=k;i<n;i++){
        window += wea[i];
        window -= wea[i-k];
        if(window==0) canHikeHere[i-k+1] = 1;
        else canHikeHere[i-k+1] = 0;
    }

    // for(int i=0;i<n-k+1;i++){
    //     cout << canHikeHere[i] << " ";
    // }

    res=0;
    for(int j = 0;j<n-k+1;j++){
        if(canHikeHere[j]==1){
            res++;
            j+=k;
        }
    }
    //cout << "\n"; //
    cout << res << "\n";
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) solve();
}