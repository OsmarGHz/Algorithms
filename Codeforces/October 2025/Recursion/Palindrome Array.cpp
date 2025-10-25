#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> a;

bool solve(int l,int r){
    if(l<=r){
        if(a[l]==a[r]){
            return solve(l+1,r-1);
        }else{
            return false;
        }
    }else{
        return true;
    }
    
}

int main(){
    int n,l=0,r;
    cin>>n;
    r=n-1;
    a.resize(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout << (solve(l,r) ? "YES" : "NO");
}