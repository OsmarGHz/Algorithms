#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
using lli = long long int;

void makeSubsequence(int vSize, vector<lli>&sec, vector<int>&subsec, map<int,set<int>>&mapa, map<int,set<int>>&mapaEle){
    int temp;
    for (int i = 0; i < vSize; i++){
        temp=0;
        for (int j = 0; j < i; j++) if(sec[j]<sec[i] && subsec[j]>temp) temp = subsec[j];
        subsec[i]=temp+1;
        if (mapa.count(subsec[i])){
            mapa[subsec[i]].insert(i);
        }
        else{
            mapa.insert({subsec[i],{i}});
            //mapa[subsec[i]] = {i};
        }
    }
}

int main(){
    cin.tie();
    ios_base::sync_with_stdio(false);
    vector<lli> sec1, sec2;
    vector<int> subsec1,subsec2, path;
    map<int,set<int>> mapa1, mapa2, mapaEle1, mapaEle2;
    int n,m,tamano;
    cin >> n;
    sec1.resize(n);
    subsec1.resize(n);
    for (int i = 0; i < n; i++) cin >> sec1[i];
    cin >> m;
    sec2.resize(m);
    subsec2.resize(m);
    for (int i = 0; i < m; i++) cin >> sec2[i];
    makeSubsequence(n,sec1,subsec1,mapa1,mapaEle1);
    makeSubsequence(m,sec2,subsec2,mapa2,mapaEle2);
    
    tamano = min(mapa1.size(),mapa2.size());
    path.resize(tamano);
    for (int i = tamano; i > 0; i--){
        while (true)
        {
            /* code */
        }
        
    }
    
}