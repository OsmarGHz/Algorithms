#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){
    int n,k,i;
    cin >> n >> k;
    vector<int> solic(n);
    map<int,int> maxim;
    for (i = 0; i < n; i++){
        cin >> solic[i];
    }
    for(i=0;i<k;i++){
        //cout << i << " ";
        if(maxim.count(solic[i])==0) maxim.emplace(solic[i],1);
        else maxim[solic[i]]++;
    }
    cout << (--maxim.end())->first << " ";
    for(;i<n;i++){
        //cout << i << " ";
        if(maxim.count(solic[i])==0) maxim.emplace(solic[i],1);
        else maxim[solic[i]]++;
        maxim[solic[i-k]]--;
        if(maxim[solic[i-k]]==0) maxim.erase(solic[i-k]);
        cout << (--maxim.end())->first << " ";
    }
}