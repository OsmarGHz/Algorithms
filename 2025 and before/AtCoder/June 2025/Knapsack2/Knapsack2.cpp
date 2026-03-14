//Here, i tried to do an improvement of the original Knapsack code. Didn't work

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,w;
    cin >> n >> w;
    vector<pair<ll,ll>> elem(n); //elem[i].first == w[i]. elem[i].second == v[i]
    map<ll,ll> ant, act;
    map<ll,ll>::iterator j, jmp;
    for (int i = 0; i < n; i++){
        cin >> elem[i].first >> elem[i].second;
    }
    ant.emplace(0,0);
    ant.emplace(elem[0].first, elem[0].second);
    ant.emplace(w, elem[0].second);
    for (int i = 1; i < n; i++){
        j = ant.begin();
        while ((*j).first < elem[i].first){
            act.emplace((*j).first, (*j).second);
            j++;
        }
        jmp = ant.begin();
        while (j!=ant.end()){
            if((*jmp).first+elem[i].first == (*j).first){
                act.emplace((*j).first , max((*jmp).second+elem[i].second, (*j).second));
                jmp++;
                j++;
            }else if((*jmp).first+elem[i].first < (*j).first){
                act.emplace((*jmp).first+elem[i].first , (*jmp).second+elem[i].second);
                jmp++;
            }else{
                act.emplace((*j).first, (*j).second);
                j++;
            }
        }
        ant = act;
        act.clear();
        if((*(--ant.end())).second < (*(--(--ant.end()))).second){
            (*(--ant.end())).second = (*(--(--ant.end()))).second;
        }
    }
    cout << (*(--ant.end())).second;
}