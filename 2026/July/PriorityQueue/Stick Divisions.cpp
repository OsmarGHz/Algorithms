#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int x,n,aux;
    cin>>x>>n;
    vector<int> d(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin>>d[i];
    }
    for (int i = 0; i < n; i++)
    {
        pq.emplace(d[i]);
    }
    ll sumTotal=0;
    while(pq.size()>1){
        aux = pq.top();
        pq.pop();
        aux = aux + pq.top();
        sumTotal+=aux;
        pq.pop();
        pq.emplace(aux);
    }
    cout << sumTotal;
}