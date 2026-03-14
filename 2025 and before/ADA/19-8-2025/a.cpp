#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << i;
        }
        cout << "\n";
    }
    for(i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout << i;
        }
        cout << "\n";
    }
}