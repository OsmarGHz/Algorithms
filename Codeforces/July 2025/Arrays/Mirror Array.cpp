#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}