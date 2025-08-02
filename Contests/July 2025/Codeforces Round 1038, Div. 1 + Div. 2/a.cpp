#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

void printNo(){
    cout << "NO";
}

void printYes(){
    cout << "YES";
}

void solve(){
    int m,n;
    cin >> n >> m;
    if((n>=2 && m>=2) && !(n==2 & m==2)){
        printYes();
    }else printNo();
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
        cout << "\n";
    }
}