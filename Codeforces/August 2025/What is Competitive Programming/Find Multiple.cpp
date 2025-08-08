#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,mult;
    cin>>a>>b>>c;
    mult = a/c;
    if((mult*c)==a){
        cout << a;
    }else if((mult*c + c) <= b){
        cout << mult*c + c;
    }else{
        cout << -1;
    }
}