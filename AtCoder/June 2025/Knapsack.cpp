#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,w,i,j;
    cin >> n >> w;
    vector<pair<ll,ll>> elem(n);
    vector<vector<ll>> act_value(n,vector<ll>(w+1));
    for (i = 0; i < n; i++){
        cin >> elem[i].first >> elem[i].second;
    }
    i=0,j=0;
    while (j<w+1){
        act_value[i][j] = (j<elem[i].first) ? 0 : elem[i].second;
        j++;
    }
    for (i = 1; i < n; i++){
        for (j = 0; j < w+1; j++){
            act_value[i][j] = (j<elem[i].first) ? act_value[i-1][j] : max(act_value[i-1][j], (act_value[i-1][j-elem[i].first])+elem[i].second);
            cout << act_value[i][j] << " ";
        }
        cout << "\n";
    }
    cout << act_value[n-1][w];
}