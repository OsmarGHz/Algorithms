#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

void iterate(ll & kBefore, ll & k, set<tuple<ll,ll,ll>> & nowCandidates, set<tuple<ll,ll,ll>> & futureCandidates){
    kBefore=k;
    ll l,r,real;
    set<tuple<ll,ll,ll>> candidates = futureCandidates;
    nowCandidates.clear();
    futureCandidates.clear();
    for(auto & cand : candidates){
        tie(l,r,real) = cand;
        if(k<l){
            futureCandidates.insert(make_tuple(l,r,real));
        }else if(k<r){
            nowCandidates.insert(make_tuple(l,r,real));
            if(real>k) k = real;
        }else if(k>=r){
            //Descarte de opcion
        }
    }
}

void solve(){
    int n;
    ll k, l, r, real, kBefore;
    cin >> n >> k;
    set<tuple<ll,ll,ll>> nowCandidates, futureCandidates;
    kBefore=k;
    for(int i=0;i<n;i++){
        cin >> l >> r >> real;
        if(k<l){
            futureCandidates.insert(make_tuple(l,r,real));
        }else if(k<r){
            nowCandidates.insert(make_tuple(l,r,real));
            if(real>k) k = real;
        }else if(k>=r){
            //Descarte de opcion
        }
    }

    while(kBefore!=k){
        iterate(kBefore,k,nowCandidates,futureCandidates);
    }
    cout << k;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
        cout << "\n";
    }
}