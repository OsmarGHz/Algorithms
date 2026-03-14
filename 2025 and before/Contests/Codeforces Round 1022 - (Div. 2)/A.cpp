#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    int n;
    ll results[501];
    cin >> t;
    results[0]=0;
    results[1]=1;
    for(int i=2, adder=0;i<501;i++){
        if(i%2==0) adder++;
        results[i] = results[i-1] + adder;
    }
    //Array of formula of sum from 1 to n, of abs(p(i)-i)
    while (t--){
        cin >> n;
        cout << results[n] << "\n";
    }
    
}