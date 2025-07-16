#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main() {
    int n, w;
    cin >> n >> w;
    vector<ll> weight(n), value(n);
    ll vmax = 0;
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
        vmax += value[i];
    }
    // dp[v] = peso mínimo para lograr valor v
    vector<ll> dp(vmax + 1, INF);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (ll v = vmax; v >= value[i]; v--) {
            dp[v] = min(dp[v], dp[v - value[i]] + weight[i]);
        }
    }
    ll ans = 0;
    for (ll v = vmax; v >= 0; v--) {
        if (dp[v] <= w) {
            ans = v;
            break;
        }
    }
    cout << ans << "\n";
}