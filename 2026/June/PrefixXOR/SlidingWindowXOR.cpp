#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

int main(){
    int n,k,x,a,b,c;
    ll resXor;
    cin>>n>>k>>x>>a>>b>>c;
    vector<ll> arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++){
        arr[i]= ((a*arr[i-1]) + b) % c;
    }

    vector<ll> preXorArr(n+1);
    preXorArr[0]=0;
    for(int i=1;i<=n;i++){
        preXorArr[i]=preXorArr[i-1] ^ arr[i-1];
    }

    resXor=preXorArr[k];
    for(int i=k+1;i<=n;i++){
        resXor = resXor ^ (preXorArr[i]^preXorArr[i-k]);
    }

    cout << resXor;
}