#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){
    int n;
    cin >> n;
    vector<vector<int>> corgi(n,vector<int> (3));
    for (int i = 0; i < n; i++){
        cin >> corgi[i][0] >> corgi[i][1] >> corgi[i][2];
    }
    sort(all(corgi));
}