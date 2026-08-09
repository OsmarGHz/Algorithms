#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(vector<int> & prefix){
    int a,b;
    cin>>a>>b;
    cout << prefix[b]-prefix[a-1];
}

int main(){
    int q,stringSize;
    string s;
    cin>>s;
    cin>>q;
    stringSize=s.size();
    vector<int> prefix(stringSize+1);
    prefix[0]=0;
    for(int i=1;i<=stringSize;i++){
        if(s[i-1]=='a'){ //cause s starts at 0
            prefix[i]=prefix[i-1]+1;
        } else prefix[i]=prefix[i-1]; 
    }
    while(q--){
        solve(prefix);
        cout << "\n";
    }
}