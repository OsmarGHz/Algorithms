#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b,c,d;
    double resLeft, resRight;
    cin>>a>>b>>c>>d;
    resLeft = b * (log(a) / log(10));
    resRight = d * (log(c) / log(10));
    //if(pow(a,b)>pow(c,d)){
    if(resLeft>resRight){
        cout << "YES";
    }else cout << "NO";
}