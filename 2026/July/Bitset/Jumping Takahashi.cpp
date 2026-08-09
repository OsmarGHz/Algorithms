#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n), b(n);
    bitset<10001> dp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] >> b[i];
    }
    dp.set(0);
    for (int i = 0; i < n; i++){
        dp = (dp << a[i]) | (dp << b[i]);
        //cout << dp;
    }
    
    if(dp[x]){
        cout << "Yes";
    }else cout << "No";
}