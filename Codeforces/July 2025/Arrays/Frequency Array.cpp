#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),freq(m+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=1;i<m+1;i++){
        cout << freq[i] << "\n";
    }
}