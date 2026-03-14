#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    vector<ll> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    ll maxIt = 1<<n, g1, g2, min_diff=LLONG_MAX;
    for(int i=0;i<maxIt;i++){
        g1=g2=0;
        int j,k;
        for(j=0,k=n-1;j<n;j++,k--){
            if((1&(i>>k))==0){
                g1 += p[j];
            }else{
                g2 += p[j];
            }
        }
        //cout << g1 << " " << g2 << "\n";
        min_diff = min(min_diff, abs(g1-g2));
    }
    cout << min_diff;
}