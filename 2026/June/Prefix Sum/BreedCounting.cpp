#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(vector<vector<int>> & numOfBIDAtPos){
    int a,b;
    cin>>a>>b;
    cout << numOfBIDAtPos[b][0]-numOfBIDAtPos[a-1][0] << " " << numOfBIDAtPos[b][1]-numOfBIDAtPos[a-1][1] << " " << numOfBIDAtPos[b][2]-numOfBIDAtPos[a-1][2];
}

int main(){
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);
    int n,q;
    cin>>n>>q;
    vector<int> bID(n);
    vector<vector<int>> numOfBIDAtPos(n+1,vector<int> (3));
    for (int i = 0; i < n; i++){
        cin>>bID[i];
    }
    numOfBIDAtPos[0][0]=0;
    numOfBIDAtPos[0][1]=0;
    numOfBIDAtPos[0][2]=0;
    for (int i = 1; i < n+1; i++){
        if(bID[i-1]==1){
            numOfBIDAtPos[i][0]=numOfBIDAtPos[i-1][0]+1;
            numOfBIDAtPos[i][1]=numOfBIDAtPos[i-1][1];
            numOfBIDAtPos[i][2]=numOfBIDAtPos[i-1][2];
        }else if(bID[i-1]==2){
            numOfBIDAtPos[i][0]=numOfBIDAtPos[i-1][0];
            numOfBIDAtPos[i][1]=numOfBIDAtPos[i-1][1]+1;
            numOfBIDAtPos[i][2]=numOfBIDAtPos[i-1][2];
        }else{
            numOfBIDAtPos[i][0]=numOfBIDAtPos[i-1][0];
            numOfBIDAtPos[i][1]=numOfBIDAtPos[i-1][1];
            numOfBIDAtPos[i][2]=numOfBIDAtPos[i-1][2]+1;
        }
    }
    
    
    while(q--){
        solve(numOfBIDAtPos);
        cout<<"\n";
    }
}