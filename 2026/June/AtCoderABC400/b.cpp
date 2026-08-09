#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main(){
    int m,n;
    cin>>n>>m;
    ll res = 1, toSum=n;
    for (int i = 1; i <= m; i++){
        res += toSum;
        if(res>1e9){
            cout << "inf";
            return 0;
        }
        toSum*=n;
    }
    cout << res;
}