#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if(s.find("010")==string::npos && s.find("101")==string::npos){
        cout << "Bad";
    }else{
        cout << "Good";
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}