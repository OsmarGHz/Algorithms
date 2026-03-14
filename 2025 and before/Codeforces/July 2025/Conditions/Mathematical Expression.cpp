#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b,c;
    char op,equal;
    cin >> a >> op >> b >> equal >> c;
    if(op=='+'){
        if(a+b==c) cout << "Yes";
        else cout << a+b;
    }else if(op=='-'){
        if(a-b==c) cout << "Yes";
        else cout << a-b;
    }else{
        if(a*b==c) cout << "Yes";
        else cout << a*b;
    }
}