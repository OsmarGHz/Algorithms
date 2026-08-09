#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
int main(){
    int n;
    cin>>n;
    vector<int> a(n);;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(all(a));
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    
}