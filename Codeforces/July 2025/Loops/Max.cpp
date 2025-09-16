#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,maxN=0,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        maxN = max(maxN,a);
    }
    cout << maxN;
}