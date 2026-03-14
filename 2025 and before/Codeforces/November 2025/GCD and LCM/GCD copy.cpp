#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcdCustom(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return gcdCustom(a-b,b);
    return gcdCustom(a,b-a);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout << gcdCustom(a,b);
}