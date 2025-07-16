#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n),dp(n,1e9); //dp = minDistancia
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    dp[n-1]=0;    
    for (int i = n-2; i >= 0; i--){
        for (int j = 1; j <= k && i+j < n; j++){
            dp[i] = min(dp[i],(abs(h[i]-h[i+j]) + dp[i+j]));
        }
    }
    cout << dp[0];
}