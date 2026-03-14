#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> factors(ll n){
    vector<ll> f;
    for (ll x = 2; x*x <= n; x++){
        while(n%x == 0) {
            f.push_back(x);
            n/=x;
        }
    }
    if(n>1) f.push_back(n);
    return f;
    
}

int main(){
    string s, cutNumber;
    cin>>s;
    int sizeToOperate = min(int(s.size()),12);
    cutNumber = s.substr(0,sizeToOperate);
    ll cutNumberll = ll(stoll(cutNumber));
    vector<ll> factores = factors(cutNumberll);
    int digitosRestantes = s.size()-sizeToOperate;

    unordered_map <ll,int> mapaf;
    int posToCompare=0;
    mapaf.emplace(factores[posToCompare],1);
    for (int i = 1; i < factores.size(); i++){
        if(factores[posToCompare]==factores[i]){
            mapaf[factores[i]]++;
        }else{
            mapaf.emplace(factores[i],1);
            posToCompare=i;
        }
    }
    
    if(digitosRestantes>0){
        if(mapaf.count(2)){
            mapaf[2]+=digitosRestantes;
        }else{
            mapaf.emplace(2,digitosRestantes);
        }

        if(mapaf.count(5)){
            mapaf[5]+=digitosRestantes;
        }else{
            mapaf.emplace(5,digitosRestantes);
        }
    }

    cout << mapaf.size() << "\n";
    for(pair<ll,int> it : mapaf){
        cout << it.first << " " << it.second << "\n";
    }
}