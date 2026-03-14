#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll gcdDiffActual, numMovs=0;
    int n, newElem=INT_MAX, j, i;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n==1){
        cout << 1;
    }else{
        sort(a.begin(),a.end());
        gcdDiffActual = abs(a[n-1]-a[n-2]);
        for (int i = n-3;i >= 0; i--){
            gcdDiffActual = gcd(gcdDiffActual,abs(a[i+1]-a[i]));
        }
        for (i = n-2, j=1; i >=0; i--, j++){
            if(a[i] != (a[n-1]-(gcdDiffActual*j))){
                newElem = (a[n-1]-(gcdDiffActual*j));
                numMovs = j;
                break;
            }
        }
        if(newElem=INT_MAX){
            newElem = (a[n-1]-(gcdDiffActual*j));
            numMovs = j;
        }
        for (i = n-2; i >=0; i--){
            numMovs += abs(a[n-1] - a[i])/gcdDiffActual;
        }
        cout << numMovs;
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}