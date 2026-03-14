//Here, i tried to do a value-based dp, but first, iterating every posible value capacity, and inside of that, iterating by every element. This solves the unbounded knapsack, NOT the 0/1 knapsack

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main(){
    int n,w;
    ll maxValue=0,maxValueCapacity=0;
    cin >> n >> w;
    vector<pair<ll,ll>> elem(n); //elem[i].first == w[i]. elem[i].second == v[i]

    for (int i = 0; i < n; i++){
        cin >> elem[i].first >> elem[i].second;
        maxValueCapacity+=elem[i].second;
    }

    vector<ll> dpValues(maxValueCapacity+1,INF);
    dpValues[0]=0;
    
    for(int i=1;i<=maxValueCapacity;i++){
        for (int j = 0; j < n; j++){
            if(i-elem[j].second >= 0){
                if(dpValues[i-elem[j].second]!=INF){
                    dpValues[i] = min( dpValues[i], dpValues[i-elem[j].second]+elem[j].first );
                }
            }
        }
        if(dpValues[i]<=w){
            maxValue = i;
        }
    }

    cout << maxValue;
}