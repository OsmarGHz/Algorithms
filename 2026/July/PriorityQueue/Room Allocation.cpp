#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    int n, maxRooms=0, t1, t2;
    cin>>n;
    vector<int> res(n);
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    queue<int> available;
    vector<tuple<int,int,int>> abpos(n), abposSorted;
    for (int i = 0; i < n; i++){
        cin>>t1>>t2;
        abpos[i] = make_tuple(t1,t2,i);
    }
    abposSorted = abpos;
    sort(all(abposSorted));
    for (int i = 0; i < n; i++){
        while(!pq.empty() && pq.top().first < get<0>(abposSorted[i])){
            available.emplace(pq.top().second);
            pq.pop();
        }
        //cout << pq.size()+1<<" ";
        if(available.size()==0){
            maxRooms++;
            pq.emplace(get<1>(abposSorted[i]),maxRooms);
            res[get<2>(abposSorted[i])] = maxRooms;
        }else{
            pq.emplace(get<1>(abposSorted[i]),available.front());
            res[get<2>(abposSorted[i])] = available.front();
            available.pop();
        }
        //maxRooms = max(maxRooms, int(pq.size()));
    }
    //cout << "\n";
    cout << maxRooms << "\n";
    for (int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    
}