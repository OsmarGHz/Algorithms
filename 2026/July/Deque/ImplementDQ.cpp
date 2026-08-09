#include <bits/stdc++.h>
using namespace std;

void solve(deque<int> & dq){
    int x;
    string s;
    cin>>s;
    if(s=="push_front"){
        cin>>x;
        dq.emplace_front(x);
    }else if(s=="push_back"){
        cin>>x;
        dq.emplace_back(x);
    } else if(s=="pop_front"){
        if(!dq.empty()){
            cout << dq.front() << "\n";
            dq.pop_front();
        }else{
            cout << "Empty\n";
        }
    } else if(s=="pop_back"){
        if(!dq.empty()){
            cout << dq.back() << "\n";
            dq.pop_back();
        }
    }
}

int main(){
    int t;
    deque<int> dq;
    cin>>t;
    while (t--)
    {
        solve(dq);
    }
    
}