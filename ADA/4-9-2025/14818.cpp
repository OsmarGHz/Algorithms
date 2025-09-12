#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

}

int main(){
    int n,m;
    cin>>n;
    vector<int> precioGalle(n);
    for (int i = 0; i < n; i++){
        cin>>precioGalle[i];
    }
    cin>>m;
    vector<int> c(m),v(m);
    for(int i=0;i<m;i++){
        cin>>c[i]>>v[i];
    }
    ll sum = 0;
    for(int i=0;i<m;i++){
        sum+=precioGalle[v[i]]*c[i];
    }
    cout << sum;
}