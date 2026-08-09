#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int counter=0;
    for (int i = 0; i < n; i++){
        if(s[i]=='(') counter++;
        else counter--;
    }
    if(counter==0) cout << "YES";
    else cout << "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}