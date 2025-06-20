#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> h(n),dp(n+1,-1); //dp = minDistancia
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    dp[n] = 100000;
    dp[n-1]=0;
    for (int i = n-2; i >= 0; i--){
        dp[i]= min( abs(h[i]-h[i+1]) + dp[i+1], abs(h[i]-h[i+2]) + dp[i+2] );
    }
    cout << dp[0];
}