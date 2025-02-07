#include <bits/stdc++.h>
using namespace std;
using lli = long long;

int main(){
    lli n,m,i,j,ans;
    cin >> n >> m;
    vector<lli>items(n,0),wScout(m,0);
    for (i = 0; i < n; i++) cin >> items[i];
    sort(items.begin(),items.end());
    for (i = n-1,j=0; i >= 0 && j<m; i--,j++) wScout[j]=items[i];
    for (j=m-1; i >= 0 && j>=0; i--,j--) wScout[j]+=items[i];
    cout << *max_element(wScout.begin(),wScout.end());
}