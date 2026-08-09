#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    unordered_map<ll,deque<pair<ll,ll>>> mapa; //sum, <pos1,pos2>
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            auto it = mapa.find(a[i]+a[j]);
            if(it==mapa.end()){
                mapa.emplace(a[i]+a[j],deque<pair<ll,ll>> {make_pair(i,j)});
            }else{
                it->second.emplace_back(make_pair(i,j));
            }
        }
    }
    for(unordered_map<ll,deque<pair<ll,ll>>>::iterator elem = mapa.begin(); elem!=mapa.end(); ++elem){
        pair<ll,ll> tempFront = elem->second.front();
        elem->second.pop_front();
        auto it = mapa.find(x-elem->first);
        if(it != mapa.end()){
            for (int i = 0; i < it->second.size(); i++){
                if(it->second[i].first!=tempFront.first && it->second[i].first!=tempFront.second && it->second[i].second!=tempFront.first && it->second[i].second!=tempFront.second){
                    cout << tempFront.first+1 << " " << tempFront.second+1 << " " << it->second[i].first+1 << " " << it->second[i].second+1;
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
}