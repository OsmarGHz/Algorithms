#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,u,v,k;
    cin>>n;
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        cin>>u;
        cin>>k;
        for (int j = 0; j < k; j++){
            cin>>v;
            matriz[u-1][v-1]=1;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << matriz[i][0];
        for (int j = 1; j < n; j++)
        {
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }
    
}