#include <bits/stdc++.h>
using namespace std;

void solve(queue<int> & q){
    int com;
    cin>>com;
    if(com==1){
        int n;
        cin>>n;
        q.emplace(n);
    }else if(com==2){
        if(!q.empty()){
            q.pop();
        }
    }else{
        if(!q.empty()){
            cout << q.front();
        }else{
            cout << "Empty!";
        }
        cout<<"\n";
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    queue<int> q;
    while(t--){
        solve(q);
    }
}