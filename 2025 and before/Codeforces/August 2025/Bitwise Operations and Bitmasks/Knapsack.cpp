#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,weight,sum_w;
    cin>>n>>weight;
    ll maxIt = 1<<n, sum_v=0, max_value=0;
    vector<int> v(n), w(n);
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(ll i=0;i<maxIt;i++){
        sum_v=0;
        sum_w = 0;
        for(int j=n-1;j>=0;j--){
            if((1&(i>>j))==1){
                sum_v += v[j];
                sum_w += w[j];
            }
        }
        if(sum_w<=weight){
            max_value = max(max_value,sum_v);
        }
    }
    cout << max_value;
}