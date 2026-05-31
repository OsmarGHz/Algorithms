#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> divisorsOf(1000001,1);

void solve(){
    int a,b;
    cin>>a>>b;
    cout << divisorsOf[__gcd(a,b)];
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;

    for(int i=2;i<=1000000;i++){
        for(int j=i;j<1000000;j+=i){
            divisorsOf[j]++;
        }
    }

    while(t--){
        solve();
        cout << "\n";
    }
}