#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, aux;
    cin>>n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++){
        cin>>aux;
        pq.push(aux);
    }
    while(!pq.empty()){
        cout << pq.top() << " ";
        aux = (float(pq.top())/2);
        if(aux!=0){
            pq.push(aux);
        }
        pq.pop();
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}