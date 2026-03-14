#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,diagIzqDer=0, diagDerIzq=0;
    cin>>n;
    vector<vector<int>> a(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        diagIzqDer += a[i][i];
    }
    for(int i=0,j=n-1; i<n; i++,j--){
        diagDerIzq += a[i][j];
    }

    cout << abs(diagDerIzq-diagIzqDer);
}