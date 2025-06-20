#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll happiness=0;
    cin >> n;
    vector<vector<int>> f (n,vector<int>(3));
    vector<vector<ll>> dp (n,vector<ll>(3,0));
    for (int i = 0; i < n; i++){
        cin >> f[i][0] >> f[i][1] >> f[i][2];
    }
    
    for (int i = 0; i < 3; i++){
        dp[0][i] = f[0][i];
    }
    
    for (int i = 1; i < n; i++){
        for (int j = 0; j < 3; j++){
            for (int previo = 0; previo < 3; previo++){
                if(j!=previo) dp[i][j] = max(dp[i][j], dp[i-1][previo] + ll(f[i][j]));
            }
        }
    }

    for (int i = 0; i < 3; i++){
        happiness = max(happiness, dp[n-1][i]);
    }
    
    cout << happiness;
}