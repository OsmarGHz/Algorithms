#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;

void solve(){
    int n,i;
    ll sum=0;
    set<int> divisors;
    cin>>n;
    for(i=1;(i*i)<n;i++){
        if(n%i==0){
            divisors.emplace(i);
            sum+=i;
        }
    }

    if(i*i==n){
        divisors.emplace(i);
        sum+=i;
    }

    for(auto i : divisors){
        if(!divisors.count(n/i)){
            sum += n/i;
        }
    }

    sum -= n;

    cout << sum;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
        cout << "\n";
    }
}