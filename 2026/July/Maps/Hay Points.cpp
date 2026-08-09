#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int m,n,auxInt;
    string auxStr;
    unordered_map <string,ll> dictionary, currJob;
    cin>>m>>n;
    for (int i = 0; i < m; i++){
        cin>>auxStr>>auxInt;
        dictionary.emplace(auxStr,auxInt);
    }
    for (int i = 0; i < n; i++){
        ll suma=0;
        currJob.clear();
        do{
            cin>>auxStr;
            currJob[auxStr]++;
        } while (auxStr!=".");
        for (pair<string,ll> it : dictionary){
            suma += currJob[it.first]*it.second;
        }
        cout << suma << "\n";
    }
}