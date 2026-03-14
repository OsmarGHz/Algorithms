#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b,c,d,resmul;
    cin>>a>>b>>c>>d;
    resmul = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    
    //cout << resmul % 100;
    //cout << setfill('0') << setw(2) << resmul;
    if(resmul < 10) cout << "0";
    cout << resmul;
}