#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for (int i = 1; i <= n; i++){
        dq.push_back(i);
    }
    for (int i = 0; i < n; i++){
        dq.push_back(dq.front());
        dq.pop_front();
        cout << dq.front() << " ";
        dq.pop_front();
    }
}