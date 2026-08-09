#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,cnt=1;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(all(a));
    for (int i = 1; i < n; i++)
    {
        if(a[i].second<a[i-1].second){
            cnt++;
        }
    }
    cout << cnt;
    
}