#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

ll solve(vector<ll> & preA, int & n){
    for(int i=n;i>=1;i--){
        for(int offset=0; offset<=n-i;offset++){
            //cout << "offset = " << offset << ". i= " << i << ". " << preA[n-offset] << " - " << preA[n-i] << "\n";
            if((preA[n-offset]-preA[n-i-offset])%7==0){
                return i;
            }
        }
    }

    return 0;
}

int main(){
    freopen("div7.in","r",stdin);
    freopen("div7.out","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    vector<ll> preA(n+1);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    preA[0]=0;
    for (int i = 1; i <= n; i++){
        preA[i]=preA[i-1]+a[i-1];
    }
    // for (int i = 0; i <= n; i++){
    //     cout << preA[i] << " ";
    // }
    //cout << "\n";
    cout << solve(preA,n);
}