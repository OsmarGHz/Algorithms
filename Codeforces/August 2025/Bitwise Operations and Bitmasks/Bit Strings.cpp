#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    ll res=1;
    for(int i=1;i<=n;i++){
        //res = (res*2)%1000000007;
        res = (res<<1)%1000000007;
    }
    cout << res;
}