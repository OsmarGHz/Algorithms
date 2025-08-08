#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int pares=0,impares=0,n,a,i;
    cin>>n;
    for (i = 0; i < n; i++){
        cin>>a;
        if(a%2==0){
            pares++;
        }else{
            impares++;
        }
    }

    cout << pares << " " << impares;
}