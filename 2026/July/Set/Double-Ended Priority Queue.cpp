#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,q,des;
    cin>>n>>q;
    vector<int> a(n);
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ms.emplace(a[i]);
    }

    for (int i = 0; i < q; i++)
    {
        cin>>des;
        if(des==0){
            int aux;
            cin>>aux;
            ms.emplace(aux);
        }else if(des==1){
            auto it = ms.begin();
            cout << *it << "\n";
            ms.erase(it);
        }else{
            auto it = prev(ms.end());
            cout << *it << "\n";
            ms.erase(it);
        }
    }
    
}