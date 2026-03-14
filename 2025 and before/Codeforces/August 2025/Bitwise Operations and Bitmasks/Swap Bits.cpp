#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int n;
    cin>>n;
    for(int i=0;i<32;i+=2){
        if(((n>>i)&1) != ((n>>(i+1))&1)){
            n ^= (1<<(i+1));
            n ^= (1<<(i));
        }
    }
    cout << n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}