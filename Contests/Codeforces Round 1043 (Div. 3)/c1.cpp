#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) x.begin(), x.end()

// vector<ll> pow3;

ll power(ll a,ll b){
    ll res=1;
    for(int i=0;i<b;i++){
        res*=a;
    }
    return res;
}

// void calcularePowersOf3(){
//     pow3.pb(1);
//     for(int i=3;i<=1000000000;i*=3){
//         pow3.pb(i);
//     }
// }

// void solve(){
//     ll n,waters_fit_in_sqrt,total_cost=0,pos;
//     vector<ll>::iterator it;
//     cin>>n;
//     while(n!=0){
//         it = lower_bound(all(pow3),n);
//         if(it!=pow3.end()){
//             if((*it)!=n) it--;
//             pos = it - pow3.begin();
//             if(it==pow3.begin()){
//                 total_cost+=(*(it+1));
//             }else{
//                 total_cost += (*(it+1)) + (pos*(*(it-1)));
//             }
//             //cout << total_cost << " ";
//             n-=(*(it));
//         }
//         //this_thread::sleep_for(chrono::milliseconds(500));
//     }
//     cout << total_cost;
// }

void solve(){
    ll n,total_cost=0,x,three_to_x=0,temp;
    cin>>n;
    while(n!=0){
        x=0,three_to_x=1;
        while(three_to_x * 3 <= n){
            three_to_x *= 3;
            x++;
        }
        temp = (three_to_x*3) + (x*(three_to_x/3));
        total_cost += temp;
        n-=three_to_x;
    }
    cout << total_cost;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    //calcularePowersOf3();
    while(t--){
        solve();
        cout << "\n";
    }
}