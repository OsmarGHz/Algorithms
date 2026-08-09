#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,l=0,r=0,res=0;
    cin>>n;
    vector<ll> k(n);
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    
    while(l<n){
        if(st.empty() && r<n){
            st.emplace(k[r]);
            r++;
        }
        while((r < n) && (!st.count(k[r]))){
            st.emplace(k[r]);
            r++;
        }
        res = max(res,int(st.size()));
        st.erase(k[l]);
        l++;
    }
    cout << res;
}