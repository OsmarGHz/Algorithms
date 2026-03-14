//It iterates every element, and inside of it, iterates every value, from value of current element, to max value posible. Ideal for UNBOUNDED knapsack

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main(){
    int n,w;
    ll maxValue = 0, maxValueCapacity=0;
    cin >> n >> w;
    vector<pair<ll,ll>> elem(n); //elem[i].first == w[i]. elem[i].second == v[i]

    for (int i = 0; i < n; i++){
        cin >> elem[i].first >> elem[i].second;
        maxValueCapacity+=elem[i].second;
    }

    vector<ll> dpValues(maxValueCapacity+1,INF);
    dpValues[0]=0;
    
    for(int j=0;j<n;j++){
        for(int i=elem[j].second; i<=maxValueCapacity; i++){
            if(dpValues[i - elem[j].second] != INF){
                dpValues[i] = min(dpValues[i], dpValues[i - elem[j].second] + elem[j].first);
            }
        }
    }

    for(int i=0;i<=maxValueCapacity;i++){
        if(dpValues[i] <= w) maxValue = i;
    }

    cout << maxValue;
}