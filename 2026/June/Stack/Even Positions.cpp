#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    stack<int> pilaInt;
    cin>>n;
    string s;
    cin>>s;
    ll sumaT = 0;
    pilaInt.push(1);
    for (int i = 2; i <= n; i++){
        if(i&1){
            if(pilaInt.empty()){
                pilaInt.push(i);
            }else{
                sumaT += i-pilaInt.top();
                pilaInt.pop();
            }
        }else{
            if(s[i-1]=='('){
                pilaInt.push(i);
            }else{
                sumaT += i-pilaInt.top();
                pilaInt.pop();
            }
        }
    }
    cout << sumaT;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}