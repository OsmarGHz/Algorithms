#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve(vector<int> & a){
    int y;
    cin>>y;
    vector<int>::iterator pos = lower_bound(all(a),y);
    if(pos!=a.end() && *pos==y){
        cout << "Yes " << pos - a.begin() + 1;
    }else{
        cout << "No " << pos - a.begin() + 1;
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,q;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    sort(all(a));
    while(q--){
        solve(a);
        cout << "\n";
    }
    
}