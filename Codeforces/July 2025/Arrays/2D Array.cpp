#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    vector<vector<int>> arr(6,vector<int> (6));
    int sum=0, maxsum=-100;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){ //i,j is the center
            sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            maxsum = max(maxsum,sum);
        }
    }
    cout << maxsum;
}