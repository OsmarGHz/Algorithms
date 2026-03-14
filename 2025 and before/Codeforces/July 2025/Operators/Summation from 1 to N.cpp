#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,sum=0;
    cin >> n;
    //for (int i = 0; i < n; i++) sum += i+1;
    sum = (n*(n+1))/2;
    cout << sum;
}