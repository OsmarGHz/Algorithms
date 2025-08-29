#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n;
    string a,b,c;
    cin>>a;
    cin>>m;
    cin>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D'){
            a.push_back(b[i]);
        }else{
            a.insert(0,1,b[i]);
        }
    }
    cout << a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}