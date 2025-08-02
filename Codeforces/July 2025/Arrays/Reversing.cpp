#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout << a[i] << " ";
    }
}