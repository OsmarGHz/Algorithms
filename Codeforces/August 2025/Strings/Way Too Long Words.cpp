#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if(s.size()>10){
        cout << s[0] << s.size()-2 << s[s.size()-1];
    }else cout << s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}