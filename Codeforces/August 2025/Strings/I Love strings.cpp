#include <bits/stdc++.h>
using namespace std;

void solve(){
    int minimo,i,maxLen;
    string s,t;
    cin>>s>>t;
    minimo=min(s.size(),t.size());
    for(i=0;i<minimo;i++){
        cout << s[i] << t[i];
    }
    if(s.size()>t.size()){
        for(;i<s.size();i++){
            cout << s[i];
        }
    }else{
        for(;i<t.size();i++){
            cout << t[i];
        }
    }
}

int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}