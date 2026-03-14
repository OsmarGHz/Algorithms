#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<ll> a;

void print(int i){
    if(i+2<=(n-1)){
        print(i+2);
        cout << " " << a[i];
    }
    else{
        cout << a[i];
    }
}

int main(){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    print(0);
}