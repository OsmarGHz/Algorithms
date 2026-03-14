#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

vector<ll> fac;

void calculateFactorials(){
    for(ll temp=1,i=1;temp<=1000000000000;i++){
        temp*=i;
        fac.pb(temp);
    }
}

// void calculate2Powers(){
//     for(ll i=1;i<=1000000000000;i<<=1){
//         a[i]=true;
//     }
// }

void solve(){
    ll n,k=LLONG_MAX,max_it = 1<<15,temp_sum=0,n_copy;
    cin>>n;
    //Debido a que 15! ya rebasa 10^12, haremos de 0 a 14 (1^15, porque son 15 elementos)
    for(int i=0;i<max_it;i++){
        temp_sum=0;
        n_copy=n;
        for(int j=0;j<=14;j++){
            if((1&(i>>j))==1){
                temp_sum += fac[j];
            }
        }
        if(temp_sum<=n_copy){
            n_copy -= temp_sum;
            k = min(k,ll(__builtin_popcountll(i))+__builtin_popcountll(n_copy));
        }
    }
    cout << k;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    calculateFactorials();
    while(t--){
        solve();
        cout<<"\n";
    }
}