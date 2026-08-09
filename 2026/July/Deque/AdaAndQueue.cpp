#include <bits/stdc++.h>
using namespace std;

void printFront(deque<int> & dq){
    if(dq.empty()){
        cout << "No job for Ada?" << "\n";
    }else{
        cout << dq.front() << "\n";
        dq.pop_front();
    }
}

void printBack(deque<int> & dq){
    if(dq.empty()){
        cout << "No job for Ada?" << "\n";
    }else{
        cout << dq.back() << "\n";
        dq.pop_back();
    }
}

void pushBegin(deque<int> & dq, int & n){
    dq.push_front(n);
}

void pushEnd(deque<int> & dq, int & n){
    dq.push_back(n);
}

void solve(deque<int> & dq, bool & rev){
    string s;
    cin>>s;
    if(s=="back"){
        if(rev==true){
            printFront(dq);
        }else{
            printBack(dq);
        }
    }else if(s=="front"){
        if(rev==true){
            printBack(dq);
        }else{
            printFront(dq);
        }
    }else if(s=="reverse"){
        rev ^= true;
    }else if(s=="push_back"){
        int n;
        cin>>n;
        if(rev==true){
            pushBegin(dq,n);
        }else{
            pushEnd(dq,n);
        }
    }else if(s=="toFront"){
        int n;
        cin>>n;
        if(rev==true){
            pushEnd(dq,n);
        }else{
            pushBegin(dq,n);
        }
    }
}

int main(){
    int q;
    bool rev=0;
    deque<int> dq;
    cin>>q;
    while (q--)
    {
        solve(dq, rev);
    }
    
}