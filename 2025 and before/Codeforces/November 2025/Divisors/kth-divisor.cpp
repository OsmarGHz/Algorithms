#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,k,i,counter=0;
    cin>>n>>k;
    vector <ll> divisors;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    counter = divisors.size()*2;
    if(divisors[divisors.size()-1]*divisors[divisors.size()-1]==n){
        counter--;
        if(counter>=k){
            if(k<=divisors.size()){
                cout << divisors[k-1];
            }else{
                cout << n/divisors[divisors.size()-2-(k-1-divisors.size())];
            }
        }else cout << -1;
    }else{
        if(counter>=k){
            if(k<=divisors.size()){
                cout << divisors[k-1];
            }else{
                cout << n/divisors[divisors.size()-1-(k-1-divisors.size())];
            }
        }else cout << -1;
    }
}