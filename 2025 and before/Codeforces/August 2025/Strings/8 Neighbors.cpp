#include <bits/stdc++.h>
using namespace std;

int checkNeighbors(vector<vector<char>> & a, int & x, int & y, int & n, int & m){
    // if(x-1>=0 && y-1>=0){
    //     if(a[x-1][y-1]!='x') return 0;
    // }
    // if(x-1>=0){
    //     if(a[x-1][y]!='x') return 0;
    // }
    // if(y-1>=0){
    //     if(a[x][y-1]!='x') return 0;
    // }
    // if(x-1>=0 && y+1<m){
    //     if(a[x-1][y+1]!='x') return 0;
    // }
    // if(x+1<n && y-1>=0){
    //     if(a[x+1][y-1]!='x') return 0;
    // }
    // if(x+1<n){
    //     if(a[x+1][y]!='x') return 0;
    // }
    // if(y+1<m){
    //     if(a[x][y+1]!='x') return 0;
    // }
    // if(x+1<n && y+1<m){
    //     if(a[x+1][y+1]!='x') return 0;
    // }
    int row,col;
    if(x-1>=0){
        for(row=x-1,col=y-1;col<=y+1;col++){
            if(col>=0 && col<m && a[row][col]!='x'){
                return 0;
            }
        }
    }
    if(y+1<m){
        for(row=x-1,col=y+1;row<=x+1;row++){
            if(row>=0 && row<n && a[row][col]!='x'){
                return 0;
            }
        }
    }
    if(x+1<n){
        for(row=x+1,col=y+1;col>=y-1;col--){
            if(col>=0 && col<m && a[row][col]!='x'){
                return 0;
            }
        }
    }
    if(y-1>=0){
        for(row=x+1,col=y-1;row>=x-1;row--){
            if(row>=0 && row<n && a[row][col]!='x'){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>x>>y;
    x--,y--;
    if(checkNeighbors(a,x,y,n,m)>0){
        cout << "yes";
    }else{
        cout << "no";
    }
}