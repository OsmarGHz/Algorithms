#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x%2!=0 && y%2!=0){
        cout << "NO";
    }else{
        cout << "YES";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}