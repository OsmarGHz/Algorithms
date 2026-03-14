#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    do{
        cout << n%10 << " ";
        n /= 10;
    }while(n!=0);

    // Este while no funciona, debe de ser un do while
    // while(n!=0){
    //     cout << n%10 << " ";
    //     n /= 10;
    // }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}