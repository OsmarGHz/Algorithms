#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

bool check(vector<ll> & a, vector<ll> & b){
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(all(a));
    sort(all(b));
    
    cout << ((check(a,b)) ? "yes" : "no");
}