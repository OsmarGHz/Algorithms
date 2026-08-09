#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, numPot=0;
    ll sum=0;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        sum+=a[i];
        if(a[i]<0){
            pq.push(a[i]);
        }
        while(sum<0){
            sum-=pq.top();
            pq.pop();
            numPot--;
        }
        numPot++;
    }
    cout << numPot;
}