#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    deque<int> a(n);
    ll costo=0;
    multiset<tuple<int,int,int>> selecter;
    tuple<int,int,int> aux;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while(a.size()>2){
        selecter.emplace(max(a[0],a[1]),0,1);
        selecter.emplace(max(a[a.size()-1],a[0]),a.size()-1,0);
        selecter.emplace(max(a[a.size()-2],a[a.size()-1]),a.size()-2,a.size()-1);
        aux = *(selecter.begin());

        cout << "\n1er param: "<< get<0>(aux) << " 2do: " << get<1>(aux) << "\n";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";

        costo += get<0>(aux);
        if(get<1>(aux)==0){
            a[1]=get<0>(aux);
            a.pop_front();
        }else if(get<1>(aux)==a.size()-1){
            a[0]=get<0>(aux);
            a.pop_back();
        }else{
            a[a.size()-2]=get<0>(aux);
            a.pop_back();
        }
        selecter.clear();
    }
    costo+=max(a[0],a[1]);
    cout << costo;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    
}