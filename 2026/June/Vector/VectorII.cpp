#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<vector<int>> & vectors){
    int des,t,x,i;
    cin>>des>>t;
    if(des==0){
        cin>>x;
        vectors[t].push_back(x);
    }else if(des==1){
        for (i = 0; i+1 < vectors[t].size(); i++){
            cout<<vectors[t][i]<< " ";
        }
        if(vectors[t].size()>=1) cout << vectors[t][i];
        cout << "\n";
    }else{
        vectors[t].clear();
    }
}

int main(){
    // cin.tie(0);
    // ios_base::sync_with_stdio(0);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> vectors(n);
    while(q--){
        solve(vectors);
    }
    
}