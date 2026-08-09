#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

void solve(vector<pair<int,int>> & a, vector<pair<int,int>> & arr){
    int x,y,aux;
    vector<pair<int,int>>::iterator it, it2;
    cin>>x>>y;
    it = lower_bound(all(a),x, [] (const pair<int,int> & p, int valor){
        return p.first<valor;
    });
    if(it==a.end()){
        cout << x+y-1;
        return;
    }
    aux = y + (it->second) - (it->first - x);
    it2 = lower_bound(all(arr), aux, [] (const pair<int,int> & p, int valor){
        return p.first<valor;
    });
    if(it2==arr.end()){
        it2--;
        cout << (it2->second) + (aux - (it2->first));
    }else{
        cout << (it2->second) - ((it2->first) - aux) - 1;
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    vector<pair<int,int>> a(n), arr(n);
    for (int i = 0; i < n; i++){
        cin>>a[i].first;
    }
    sort(all(a));
    a[0].second=a[0].first-1;
    arr[0].first=a[0].second;
    arr[0].second=a[0].first;
    for (int i = 1; i < n; i++){
        a[i].second = a[i-1].second + (a[i].first-a[i-1].first-1);
        arr[i].first = a[i].second;
        arr[i].second = a[i].first;
    }
    for (int i = 0; i < q; i++){
        solve(a,arr);
        cout << "\n";
    }
    
}