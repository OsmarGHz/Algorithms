#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    vector<int> priceTicket(n), budgetUser(m);
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        cin>>priceTicket[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>budgetUser[i];
    }
    for (int i = 0; i < n; i++)
    {
        ms.emplace(priceTicket[i]);
    }

    for (int i = 0; i < m; i++)
    {
        auto it = ms.upper_bound(budgetUser[i]);
        if(it!=ms.begin()){
            it = prev(it);
            cout << *it << " ";
            ms.erase(it);
        }else{
            cout << -1 << " ";
        }
    }
    
    
}