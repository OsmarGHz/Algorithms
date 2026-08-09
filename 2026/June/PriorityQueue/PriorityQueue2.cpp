#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,t,opt, x;
    cin>>n>>q;
    vector<priority_queue<int>> pqs(n);
    for (int i = 0; i < q; i++){
        cin>>opt>>t;
        if(opt==0){
            cin>>x;
            pqs[t].push(x);
        }else if(opt==1){
            if(!pqs[t].empty()){
                cout << pqs[t].top() << "\n";
            }
        }else{
            if(!pqs[t].empty()){
                pqs[t].pop();
            }
        }
    }
    
}