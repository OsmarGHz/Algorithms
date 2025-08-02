#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

void solve(){
    int n,k,currentI=0;
    cin>>n>>k;
    vector<ll> h(n), h_modi;
    set<ll> a;
    for(int i=0;i<n;i++){
        cin >> h[i];
        if(! a.count(h[i])){
            a.insert(h[i]);
            h_modi.pb(h[i]);
        }
    }

    ll secondsWater = 0; //Segundos==0, alturaAgua==1
    ll currentAltura = h[k-1], cost, maxAlt;

    sort(all(h_modi));
    maxAlt = h_modi[h_modi.size()-1];
    while(currentAltura!=h_modi[currentI]){
        currentI++;
    }

    while(currentAltura!=maxAlt){
        cost=abs(currentAltura-h_modi[currentI+1]);
        if(secondsWater+cost>currentAltura){
            cout << "No";
            return;
        }
        currentI++;
        currentAltura = h_modi[currentI];
        secondsWater+=cost;
    }
    cout << "Yes";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
        cout << "\n";
    }
}