#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n),dpMinCost(n,1e9);

    for (int i = 0; i < n; i++) cin >> h[i];

    dpMinCost[0]=0; //Cost 0 to arrive from 0 to 0
    
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= k && i-j >= 0; j++){
            dpMinCost[i] = min( dpMinCost[i] , abs( h[i-j]-h[i]) + dpMinCost[i-j] );
        }
    }
    cout << dpMinCost[n-1];
}