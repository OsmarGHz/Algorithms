#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int n,newN=0;
    cin>>n;
    for(int i=0,j=31;i<32;i++,j--){
        if(((n>>i)&1)==1){
            //newN = newN | (1<<j);
            newN = newN | (1<<(31-i));
        }
    }
    cout << newN;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}