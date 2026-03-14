#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,cost;
    int k,w;
    cin >> k >> n >> w;
    cost = k*((w*(w+1))/2);
    if(cost-n < 0) cout << 0;
    else cout << cost - n;
}