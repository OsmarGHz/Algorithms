#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res;
    cin>>n;
    for(int i=1;i<=12;i++){
        res = n*i;
        cout << n << " * " << i << " = " << res << "\n";
    }
}