#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    unordered_map<char,int> mapamx, mapaco;
    int n,m;
    string mx,co;
    ll max_cost=0;
    vector<int> cost(26);
    cin>>n;
    mx.resize(n);
    for(int i=0;i<n;i++){
        cin>>mx[i];//Esto es correcto, ya que lee caracter a caracter, SALTANDOSE los espacios
    }
    for(int i=0;i<n;i++){
        if(mapamx.count(mx[i])==1){
            mapamx[mx[i]]++;
        }else{
            mapamx.emplace(mx[i],1);
        }
    }

    cin>>m;
    co.resize(m);
    for(int i=0;i<m;i++){
        cin>>co[i];
    }
    for(int i=0;i<m;i++){
        if(mapaco.count(co[i])==1){
            mapaco[co[i]]++;
        }else{
            mapaco.emplace(co[i],1);
        }
    }

    for(int i=0;i<26;i++){
        cin>>cost[i];
    }

    for(int i=0;i<26;i++){
        if(mapaco.count(i+'A')==1 && mapamx.count(i+'A')==1) max_cost += cost[i]*(min(mapamx[i+'A'],mapaco[i+'A']));
    }

    cout << max_cost;
}