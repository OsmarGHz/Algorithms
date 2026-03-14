#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

vector<bool> convertBinary(ll n){
    vector<bool> a;
    while(n!=0){
        if(n%2==1){
            a.pb(1);
        }else{
            a.pb(0);
        }
        n/=2;
    }
    return a;
}

bool check(vector<bool> a){
    for(int i=0,j=a.size()-1;i<=j;i++,j--){
        if(a[i]!=a[j]) return false;
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    vector<bool> a;
    if(n%2==1){
        a = convertBinary(n);
        if(check(a)==true){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
}