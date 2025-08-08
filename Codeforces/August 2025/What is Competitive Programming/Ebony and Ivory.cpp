#include <bits/stdc++.h>
using namespace std;
int a,b,c;

int can(vector<bool> & reach){
    for(int i=a;i<=c;i++){
        if(reach[i-a]==true) reach[i]=true;
    }
    for(int i=b;i<=c;i++){
        if(reach[i-b]==true) reach[i]=true;
    }
    return reach[c];
}

int main(){
    cin>>a>>b>>c;
    vector<bool> reach(c+1,false);
    reach[0]=true;
    cout << (can(reach) ? "Yes" : "No");
}