#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void recu(int n){
    if(n==0) return;
    cout << "I love Recursion\n";
    recu(n-1);
}

int main(){
    int n;
    cin>>n;
    recu(n);
}