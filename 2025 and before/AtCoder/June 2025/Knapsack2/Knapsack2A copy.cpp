//Here, i tried to do a value-based dp, but first, iterating every posible value capacity, and inside of that, iterating by every element. This solves the 0/1 knapsack. It takes time, but it solves the problem

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main(){
    int n,w,toAdd2Exclu,shouldIAdd=0;
    ll maxValue=0,maxValueCapacity=0,antValue;
    cin >> n >> w;
    vector<pair<ll,ll>> elem(n); //elem[i].first == w[i]. elem[i].second == v[i]

    for (int i = 0; i < n; i++){
        cin >> elem[i].first >> elem[i].second;
        maxValueCapacity+=elem[i].second;
    }

    vector<ll> dpValues(maxValueCapacity+1,INF);
    vector<unordered_set<int>> excluded(maxValueCapacity+1);
    dpValues[0]=0;
    
    for(int i=1;i<=maxValueCapacity;i++){
        shouldIAdd=0;
        for (int j = 0; j < n; j++){
            if(i-elem[j].second >= 0){
                if( ! excluded[i-elem[j].second].count(j)){
                    if(dpValues[i-elem[j].second]!=INF){
                        antValue=dpValues[i];
                        dpValues[i] = min( dpValues[i], dpValues[i-elem[j].second]+elem[j].first );
                        if(dpValues[i]<antValue){
                            toAdd2Exclu = j;
                            shouldIAdd = 1;
                        } 
                    }
                }
            }
        }
        if(shouldIAdd==1){
            excluded[i] = excluded[i - elem[toAdd2Exclu].second];
            excluded[i].insert(toAdd2Exclu);
        }
        if(dpValues[i]<=w){
            maxValue = i;
        }
    }

    cout << maxValue;
}