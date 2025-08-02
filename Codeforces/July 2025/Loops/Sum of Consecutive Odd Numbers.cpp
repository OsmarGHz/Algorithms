#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void doFor(int & mini, int & maxi){
    ll sum=0;
    // for(int i=mini+1;i<maxi;i++){
    //     if(i%2==1) sum+=i;
    // }

    if( (mini+1) % 2 == 0){
        mini++;
    }
    for(int i=mini+1;i<maxi;i+=2){
        sum+=i;
    }
    cout << sum;
}

void solve(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        // ll sum=0;
        // for(int i=y+1;i<x;i++){
        //     if(i%2==1) sum+=i;
        // }
        // cout << sum;
        doFor(y,x);
    }else{
        // ll sum=0;
        // for(int i=x+1;i<y;i++){
        //     if(i%2==1) sum+=i;
        // }
        // cout << sum;
        doFor(x,y);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}