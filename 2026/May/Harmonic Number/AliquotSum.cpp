#include <bits/stdc++.h>
using namespace std;

vector<int> s;

void solve(){
    int n;
    cin>>n;
    if(s[n]>n){
        cout << "abundant";
    }else if(s[n]<n){
        cout << "deficient";
    }else{
        cout << "perfect";
    }
}

int main(){
    int t;
    cin>>t;

    s.resize(1000000+1,0);

    for(int i=1;i<=5000000;i++){
        for(int j=i*2;j<=1000000;j+=i){
            s[j]+=i;
        }
    }

    while(t--){
        solve();
        cout << "\n";
    }
}