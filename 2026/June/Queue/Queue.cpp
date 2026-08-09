#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,quantum, time=0, processTime;
    string name;
    cin>>n>>quantum; 
    queue <pair<string,int>> q; //pair of nameProcess, timeRemaining
    for (int i = 0; i < n; i++){
        cin>>name>>processTime;
        q.emplace(name,processTime);
    }
    
    while(!q.empty()){
        if( q.front().second <= quantum ){
            time += q.front().second;
            cout << q.front().first << " " << time << "\n";
        }else{
            q.front().second -= quantum;
            time += quantum;
            q.emplace(q.front());
        }
        q.pop();
    }

}