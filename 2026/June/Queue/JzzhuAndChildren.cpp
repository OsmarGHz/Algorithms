#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,numCandies;
    cin>>n>>m;
    queue <pair<int,int>> q;
    for (int i = 0; i < n; i++){
        cin>>numCandies;
        q.emplace(numCandies,i+1);
    }
    while(q.size()>1){
        if( (q.front().first - m) > 0){
            q.front().first -= m;
            q.push(q.front());
        }
        q.pop();
    }
    cout << q.front().second;
}