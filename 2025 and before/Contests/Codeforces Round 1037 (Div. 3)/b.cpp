#include <bits/stdc++.h>
using namespace std;

void solve(){
    int res, n, k, bestRes=0,window=0;
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

    for(int j = 0;j<n-k+1;j++){
        res=0;
        //cout << j << " ";
        for(int i = j;i<n-k+1;i++){
            //cout << i << "   ";
            if(canHikeHere[i]==1){
                res++;
                i+=k;
            }
        }
        if(res>bestRes) bestRes=res;
    }
    //cout << "\n"; //
    cout << bestRes << "\n";
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) solve();
}