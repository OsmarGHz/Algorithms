#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i;
    cin>>n>>k;
    vector<int> p(n);
    for (i = 0; i < n; i++){
        cin>>p[i];
    }
    priority_queue<int, vector<int>, greater<int>> inversePq;
    for (i = 0; i < k; i++){
        inversePq.push(p[i]);
    }
    cout << inversePq.top() << "\n";
    for (; i < n; i++){
        inversePq.push(p[i]);
        inversePq.pop();
        cout << inversePq.top() << "\n";
    }
    
}