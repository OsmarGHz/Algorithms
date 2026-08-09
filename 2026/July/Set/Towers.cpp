#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

bool comparar(const pair<int,int> & a, const pair<int,int> & b){
    if(a.first != b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    multiset<int> ms;
    multiset<int>::iterator it;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {   
        it = ms.upper_bound(a[i]);
        if(it==ms.end()){
            ms.emplace(a[i]);
        }else{
            ms.erase(it);
            ms.emplace(a[i]);
        }
    }
    cout << ms.size();
    
}