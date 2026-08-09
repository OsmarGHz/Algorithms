#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main(){
    int a;
    cin>>a;
    if(400%a==0){
        cout << 400/a;
    }else{
        cout << -1;
    }
}