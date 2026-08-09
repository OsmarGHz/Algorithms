#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,l,r;
    ll k,res=0;
    cin>>n>>k;
    vector<ll> a(n);
    multiset<ll> mult;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    l=0;r=0;
    while(l<n){
        if(mult.empty()){
            r = l;
            mult.emplace(a[r]);
            r++;
        }
        while(r < n){
            mult.emplace(a[r]);
            if((*prev(mult.end()) - *mult.begin()) > k){
                mult.erase(mult.find(a[r]));
                break;
            }else r++;
        }
        l++;
        res+=mult.size();
        mult.erase(mult.find(a[l-1]));
    }
    cout << res;
}