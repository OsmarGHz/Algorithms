#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,k,s,count=0;
    cin>>k>>s;
    for(x=k;x>=0;x--){
        for(y=min(k,s-x);y>=0;y--){
            z = s-x-y;
            if(z >= 0 && z <= k) count++;
        }
    }
    cout << count;
}