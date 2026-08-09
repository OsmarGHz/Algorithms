#include <bits/stdc++.h>
using namespace std;

void solve(priority_queue<int, vector<int>, greater<int>> & invPQ){
    string s;
    cin>>s;
    if(s=="push"){
        int x;
        cin>>x;
        invPQ.push(x);
    }else if(s=="top"){
        cout << invPQ.top() << "\n";
    }else{
        invPQ.pop();
    }
}

int main(){
    priority_queue<int, vector<int>, greater<int>> invPQ;
    int t;
    cin>>t;
    while(t--){
        solve(invPQ);
    }
}