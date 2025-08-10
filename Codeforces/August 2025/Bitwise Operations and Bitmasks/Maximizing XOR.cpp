#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r,max_xor=0;
    cin>>l>>r;
    for(int a=l;a<=r;a++){
        //for(int b=a;b<=r;b++){ //Original for line
        for(int b=a+1;b<=r;b++){    //an aproach to view if a^a is useless to the result or not
            max_xor = max(max_xor,(a^b));
        }
    }
    cout << max_xor;
}