#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<int> a(n);
    multiset<int> ms;
    multiset<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ms.emplace(a[0]);
    for (int i = 1; i < n; i++)
    {   
        it = ms.upper_bound(a[i]);
        if(it!=ms.begin()){
            it = prev(it);
            if((*it)+1==a[i]){   
                ms.erase(it);
                ms.emplace(a[i]);
            }else{
                ms.emplace(a[i]);
            }
        }else{
            ms.emplace(a[i]);
        }
    }
    cout << ms.size();
    
}