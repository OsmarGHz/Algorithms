#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout << max(a+a-1,max(a+b,b+b-1));
}