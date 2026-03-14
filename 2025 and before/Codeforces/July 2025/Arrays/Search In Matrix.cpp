#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int isPresent(vector<vector<int>> & a, int & n, int & m, int & x){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x) return 1;
        }
    }
    return 0;
}

int main(){
    int n,m,x;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>x;
    cout << ((isPresent(a,n,m,x)) ? "will not take number" : "will take number");
}