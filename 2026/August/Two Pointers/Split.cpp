#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool validarMapas(map<int,int> & referenceMap, map<int,int> & currentMap){
    for(auto elem : referenceMap){
        if(!(currentMap[elem.first]<=elem.second)){
            return false;
        }
    }
    return true;
}

ll solve(){
    ll res = 0;
    int n,k,l=0,r=0,numWindow=0;
    cin>>n>>k;
    vector<int> a(n);
    map<int,int> mapa, referenceMap, currentMap;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mapa[a[i]]++;
    }

    for(auto elem : mapa){
        if((elem.second%k)==0){
            referenceMap.emplace(elem.first, elem.second/k);
            numWindow += elem.second / k;
        }else{
            return 0;
        }
    }

    while(r<n){
        currentMap[a[r]]++;
        if(validarMapas(referenceMap, currentMap)){
            res+= r-l+1;
            r++;
        }else{
            currentMap[a[r]]--;
            if(r!=l) currentMap[a[l]]--;
            if(currentMap[a[l]]==0){
                currentMap.erase(a[l]);
            }
            l++;
        }
        if(r<l) r=l;
    }
    
    return res;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cout << solve() << "\n";
    }
}