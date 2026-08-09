#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(),(x).end()

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,q,maxEle,mod;
    ll m;
    cin>>n>>q;
    deque<int> dq;
    vector<int> a(n);
    vector<pair<int,int>> history;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        dq.emplace_back(a[i]);
    }
    maxEle = *max_element(all(dq));
    history.emplace_back(dq[0], dq[1]);
    for (int i = 1; dq.front()!=maxEle; i++){
        if(dq[0]>dq[1]){
            int aux = dq[0];
            dq.pop_front();
            dq.emplace_back(dq.front());
            dq.pop_front();
            dq.emplace_front(aux);
        }else{
            dq.emplace_back(dq.front());
            dq.pop_front();
        }
        history.emplace_back(dq[0], dq[1]);
    }
    mod = dq.size()-1;
    for (int i = 0; i < q; i++){
        cin>>m;
        if(m>history.size()){
            cout << maxEle << " " << dq[ll(1)+((m-history.size())%mod)];
        }else{
            cout << history[m-1].first << " " << history[m-1].second;
        }
        cout << "\n";
    }
}