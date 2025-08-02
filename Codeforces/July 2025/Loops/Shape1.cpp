#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}