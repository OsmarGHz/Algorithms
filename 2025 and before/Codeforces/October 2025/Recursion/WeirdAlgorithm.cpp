#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solveFor(long long i){
    cout << i  << " ";
    if(i==1){
        return;
    }
    if(i%2==0){
        i/=2;
    } 
    else{
        i = (i*3) + 1;
    }
    solveFor(i);
}

int main(){
    int n;
    cin>>n;
    solveFor(n);
}