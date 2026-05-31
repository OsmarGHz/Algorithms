#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    size_t n, found0;
    cin>>n;
    string s,counted;
    cin>>s;
    counted=s;
    ll totalCost=0;
    for(size_t i=1;i<=n;i++){
        found0 = s.find('0',i-1);
        //cout << "found0 : " << found0 << "\n";
        if(found0 != string::npos){
            i = found0 + 1;
            for(size_t j=i;j<=n;j+=i){
                if(s[j-1]!='0') break;
                if(counted[j-1]=='0'){
                    totalCost+=i;
                    //cout << "Added : " << i << "\n";
                    counted[j-1]='1';
                }
            }
        }else{
            break;
        }
        //cout << s << "\n";
    }
    cout << totalCost;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}