#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //freopen("test_input.txt","r",stdin);
    //freopen("test_output.txt","w",stdout);
    int n,x,comp;
    cin>>n>>x;
    vector<int> a(n);
    vector<vector<int>> arrs;
    map<int,int> mapa;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(!mapa.count(a[i])){
            mapa[a[i]] = arrs.size();
            arrs.emplace_back(vector<int>{i});
        }else{
            arrs[mapa[a[i]]].emplace_back(i);
        }
    }
    for(map<int,int>::iterator par = mapa.begin(); par!=mapa.end(); par = next(par)){
        //cout << par.first << " " << par.second << "\n";
        comp = x - par->first;
        if(x-par->first==par->first){
            if(arrs[par->second].size()>=2){
                cout << arrs[par->second][0]+1 << " " << arrs[par->second][1]+1;
                return 0;
            }
        }else{
            map<int,int>::iterator aux = mapa.find(comp);
            if(aux!=mapa.end()){
                cout << arrs[par->second][0]+1 << " " << arrs[aux->second][0]+1;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
}