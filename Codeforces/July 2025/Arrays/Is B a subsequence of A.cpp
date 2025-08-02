#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int coincidence(vector<int> & a, vector<int> & b, int & n, int & m){
    int ite=0;
    for(int i=0;i<n && ite<m;i++){
        if(a[i]==b[ite]) ite++;
    }
    if(ite==m) return 1;
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    cout << ((coincidence(a,b,n,m)) ? "YES" : "NO");
}