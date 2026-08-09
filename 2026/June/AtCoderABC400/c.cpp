#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main(){
    ll n,contGN=0;
    cin>>n;
    for (ll twoToA = 2; twoToA <= n; twoToA<<=1){
        for(ll b = 1; (b*b) <= n/twoToA; b+=2){
            if((twoToA * (b*b))<=n){
                    contGN++;
            }else{
                break;
            }
        }
    }
    cout << contGN;
    
    
}