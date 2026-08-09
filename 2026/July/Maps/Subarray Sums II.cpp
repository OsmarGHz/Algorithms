#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll x,cont=0,counter;
    cin>>n>>x;
    vector<ll> a(n+1),preSum(n+1);
    map<ll,int> reps;
    for (int i = 1; i < n+1; i++){
        cin>>a[i];
    }
    reps[0]++;
    for (int i = 1; i < n+1; i++){
        preSum[i]+=preSum[i-1]+a[i];
        counter = preSum[i]-x;
        cont += reps[counter];
        reps[preSum[i]]++;
    }
    cout << cont;
}