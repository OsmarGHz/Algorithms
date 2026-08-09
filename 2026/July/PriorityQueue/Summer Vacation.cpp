#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int>> ab(n);
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        ab[i] = make_tuple(a,b);
    }
    priority_queue<int> pq;
    ll suma=0;
    sort(all(ab));
    for (int diaActual = 1, i=0; diaActual <= m; diaActual++){
        while (i<n && get<0>(ab[i])<=diaActual){
            pq.emplace(get<1>(ab[i]));
            i++;
        }
        if(!pq.empty()){
            suma += pq.top();
            pq.pop();
        }
    }
    cout << suma;
}