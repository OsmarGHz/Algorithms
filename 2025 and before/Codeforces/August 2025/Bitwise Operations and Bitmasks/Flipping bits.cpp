#include <bits/stdc++.h>
using namespace std;

unsigned int flip_bits(unsigned int n){
    // unsigned int new_n=n;
    // for(int i=0;i<32;i++){
    //     new_n = new_n ^ (1<<i);
    // }
    // return new_n;
    return ~n;
}

void solve(){
    unsigned int n;
    cin>>n;
    cout << flip_bits(n);
}

int main(){
    int q;
    cin>>q;
    while(q--){
        solve();
        cout << "\n";
    }
}