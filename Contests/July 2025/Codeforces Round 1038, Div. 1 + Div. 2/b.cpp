#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

void solve(){
    int n;
    cin >> n;
    ll movements=0, addZeros=0, addOnes=0, extraMovements=0;
    vector<ll> ogZeros(n), ogOnes(n), targetZeros(n), targetOnes(n);
    for (int i = 0; i < n; i++){
        cin >> ogZeros[i] >> ogOnes[i] >> targetZeros[i] >> targetOnes[i];
    }
    for (int i = 0; i < n; i++){
        //addZeros=0, addOnes=0, extraMovements=0;
        addZeros = ogZeros[i] - targetZeros[i];
        if(addZeros<0) addZeros=0;
        addOnes = ogOnes[i] - targetOnes[i];
        if(addOnes>0) extraMovements = ogZeros[i]-addZeros;
        else{ addOnes = 0; extraMovements=0; }
        movements += extraMovements + addZeros + addOnes;
        // cout << extraMovements << addZeros << addOnes;
        // cout << "\n";
    }
    cout << movements;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--){
        solve();
        cout << "\n";
    }
}