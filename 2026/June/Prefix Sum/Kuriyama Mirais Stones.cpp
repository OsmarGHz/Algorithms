#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<ll> & preSumV, vector<ll> & preSumU){
    int tipo, l, r;
    cin>>tipo>>l>>r;
    if(tipo==1){
        cout << preSumV[r]-preSumV[l-1];
    }else{
        cout << preSumU[r]-preSumU[l-1];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n), u;
    vector<ll> preSumV(n+1), preSumU(n+1);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    preSumV[0]=0;
    for(int i=1;i<=n;i++){
        preSumV[i]=preSumV[i-1]+v[i-1]; //v inicia en 0 y acaba en n-1, presum inicia realmente en 1
    }
    
    u = v;
    sort(all(u));
    for (int i = 1; i <= n; i++){
        preSumU[i]=preSumU[i-1]+u[i-1];
    }

    int m;
    cin>>m;
    while(m--){
        solve(preSumV, preSumU);
        cout<<"\n";
    }
    
}