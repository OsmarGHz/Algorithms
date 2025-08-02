#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m,diff,sum;
    while(cin >> n >> m){
        if(n<=0 || m<=0) break;
        sum=0;
        if(n>m){
            for(int i=m;i<=n;i++){
                sum+=i;
                cout << i << " ";
            }
        }else if(m>=n){
            for(int i=n;i<=m;i++){
                sum+=i;
                cout << i << " ";
            }
        }
        cout << "sum =" << sum << "\n";
    }
}