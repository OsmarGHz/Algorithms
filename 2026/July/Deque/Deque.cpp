#include <bits/stdc++.h>
using namespace std;

void solve(deque<int> & dq){
    int v1,v2;
    cin>>v1;
    if(v1==0){
        cin>>v2;
        dq.emplace_front(v2);
    }else if(v1==1){
        cin>>v2;
        dq.emplace_back(v2);
    } else if(v1==2){
        dq.pop_front();
    } else if(v1==3){
        dq.pop_back();
    } else{
        cin>>v2;
        cout << dq[v2] << "\n";
    }
}

int main(){
    int q;
    deque<int> dq;
    cin>>q;
    while (q--)
    {
        solve(dq);
    }
    
}