#include <bits/stdc++.h>
using namespace std;

bool isOn(int n,int i){
    // int mask=1;
    // for(int j=0;j<i;j++){
    //     mask <<= 1; //mask = mask << 1;
    // }
    // return (n&mask) ? true : false;
    return (n&(1<<i)) != 0;
}

int main(){
    int n,i;
    cin>>n>>i;
    cout << ((isOn(n,i)) ? "true" : "false");
}