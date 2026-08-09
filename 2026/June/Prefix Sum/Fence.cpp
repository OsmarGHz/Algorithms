#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k,sum=0,minSum,optimalIdx=1, j=0;
    cin>>n>>k;
    vector<ll> h(n);
    for (int i = 0; i < n; i++){
        cin>>h[i];
    }
    for (int i = 0; i < k; i++){
        sum+=h[i];
    }
    minSum=sum;
    for(;j+k<n;j++){
        sum+=h[j+k];
        sum-=h[j];
        if(sum<minSum){
            optimalIdx=j+2;
            minSum=sum;
        }
    }
    cout << optimalIdx;
}