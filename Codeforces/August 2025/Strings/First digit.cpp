#include <bits/stdc++.h>
using namespace std;

int main(){
    // int x,lastD;
    // cin>>x;
    // while(x!=0){
    //     lastD = x%10;
    //     x/=10;
    // }
    // cout << ((lastD%2==0) ? "EVEN" : "ODD");
    string s;
    cin>>s;
    int firstD = s[0]-48;
    //cout << ((firstD%2) ? "EVEN" : "ODD"); //CUIDADO: LA SENTENCIA "EVEN" ES CIERTA SI first%2>0, lo cual en práctica es falso
    cout << ((firstD%2==0) ? "EVEN" : "ODD");
}