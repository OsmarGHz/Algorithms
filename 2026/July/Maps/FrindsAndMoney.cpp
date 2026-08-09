#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q,auxInt,tipo;
    string auxStr;
    unordered_map<string,int> xy;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>auxStr>>auxInt;
        xy.emplace(auxStr,auxInt);
    }
    for(int i=0;i<q;i++){
        cin>>tipo>>auxStr;
        if(tipo==1){
            cin>>auxInt;
            xy[auxStr]+=auxInt;
        }else{
            cout << xy[auxStr]<<"\n";
        }
    }
}