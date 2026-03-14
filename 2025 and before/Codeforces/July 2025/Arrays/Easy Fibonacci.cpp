#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> fib(45);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<45;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<n;i++){
        cout << fib[i] << " ";
    }
}