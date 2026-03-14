#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    // if(n%2==0){
    //     cout << n/2;
    // }else{
    //     cout << -((n+1)/2);
    // }

    if(n%2==0){
        //cout << ceil(double(n)/2);
        cout << n/2;
    }else{
        cout << ll(-ceil(double(n)/double(2)));
    }
}