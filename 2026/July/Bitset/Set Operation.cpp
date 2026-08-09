//#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

bool solve(vector<unordered_set<int>> & dic, int & aux1, int & aux2, int & n){
    for (int i = 0; i < n; i++){
        if(dic[i].find(aux1)!=dic[i].end() && dic[i].find(aux2)!=dic[i].end()){
            return true;
        }
    }
    return false;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,q,tamTemp,aux1,aux2;
    cin>>n;
    vector<unordered_set<int>> dic(n);
    for (int i = 0; i < n; i++){
        cin>>tamTemp;
        for (int j = 0; j < tamTemp; j++){
            cin>>aux1;
            dic[i].emplace(aux1);
        }
    }
    cin>>q;
    for (int i = 0; i < q; i++){
        cin>>aux1>>aux2;
        cout << ((solve(dic,aux1,aux2,n)) ? "YES" : "NO") << "\n";
    }
    
}