#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout << a;
        return 0;
    }
    int diff = min(a,min(b,abs(a-b)));
    for (int i = diff; i >= 1; i--){
        if(a%i==0 && b%i == 0){
            cout << i;
            return 0;
        }
    }
}