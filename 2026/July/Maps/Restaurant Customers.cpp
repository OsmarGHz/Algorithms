#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,aux1,aux2,maxSize=0;
    cin>>n;
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pqCustomers;
    priority_queue <int, vector<int>, greater<int>> pqSimult;
    for (int i = 0; i < n; i++){
        cin>>aux1>>aux2;
        pqCustomers.emplace(aux1,aux2);
    }
    while(!pqCustomers.empty()){

        while((!pqSimult.empty()) && pqCustomers.top().first > pqSimult.top()){
            pqSimult.pop();
        }

        do{
            pqSimult.emplace(pqCustomers.top().second);
            pqCustomers.pop();
        }while ((!pqCustomers.empty()) && pqCustomers.top().first <= pqSimult.top());
        maxSize = max(maxSize,int(pqSimult.size()));
    }
    cout << maxSize;
}