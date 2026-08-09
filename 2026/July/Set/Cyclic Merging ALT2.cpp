#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,pointOfBreak=0;
    cin>>n;
    deque<int> a(n),b;
    ll costo=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if(a[i]>a[pointOfBreak]){
            pointOfBreak=i;
        }
    }
    for (int i = pointOfBreak; i < n; i++)
    {
        b.emplace_back(a[i]);
    }
    for (int i = 0; i < pointOfBreak; i++)
    {
        b.emplace_back(a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        costo += max(b[i],b[i-1]);
    }
    cout << costo;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    
}