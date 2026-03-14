#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    int n;
    //ll summation=0,temp;
    cin>>n;
    ll summation=0;
    vector<int> a(n);
    //int a[n];
    for(int i=0;i<n;i++){
        //cin>>temp;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        summation+=a[i];
    }
    cout << abs(summation);
}