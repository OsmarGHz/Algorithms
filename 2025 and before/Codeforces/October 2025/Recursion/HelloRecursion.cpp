#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<=0) return 0;
    int temp;
    cin>>temp;
    return temp + sum(n-1);
}

int main(){
    int t,n;
    cin>>t;
    int ogT = t;
    while(t--){
        cin>>n;
        cout << "Case " << ogT - t << ": " << sum(n) << "\n";
    }
}