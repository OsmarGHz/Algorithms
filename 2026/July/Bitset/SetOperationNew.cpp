//#include <bits/stdc++.h>
#include <bitset>
#include <vector>
#include <iostream>
using namespace std;

bool solve(vector<bitset<1000>> & dic, int & aux1, int & aux2, int & n){
    if( (dic[aux1-1] & dic[aux2-1]).any() ){
        return true;
    }
    return false;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,q,numSet,aux1,aux2;
    cin>>n;
    vector<bitset<1000>> dic(10000);
    for (int i = 0; i < n; i++){
        cin>>numSet;
        for (int j = 0; j < numSet; j++){
            cin>>aux1;
            dic[aux1-1].set(i);
        }
    }
    cin>>q;
    for (int i = 0; i < q; i++){
        cin>>aux1>>aux2;
        cout << ((solve(dic,aux1,aux2,n)) ? "Yes" : "No") << "\n";
    }
    
}