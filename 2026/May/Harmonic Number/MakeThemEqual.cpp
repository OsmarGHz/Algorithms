#include <bits/stdc++.h>
using namespace std;

bool allWishedIsMultiple(string & s, int & i, char & c, int & n){
    for (int j = i-1; j < n; j+=i){
        if(s[j]!=c){
            return false;
        }
    }
    return true;
}

bool isAllC(string & s, char & c, int & n){
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(isAllC(s,c,n)){
        cout << "0";
        return;
    }
    for(int i=2;i<=n;i++){
        if(allWishedIsMultiple(s,i,c,n)){
            cout << "1" << "\n" << i;
            return;
        }
    }
    cout << "2" << "\n" << n << " " << n-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}