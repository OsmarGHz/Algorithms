#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<int> & a){
    int decision,x,p;
    cin>>decision;
    if(decision==0){
        cin>>x;
        a.push_back(x);
    }else if(decision==1){
        cin>>p;
        cout<<a[p];
        cout<<"\n";
    }else{
        a.pop_back();
    }
}

int main(){
    vector<int> a;
    int q;
    cin>>q;
    while(q--){
        solve(a);
    }
}