#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //int nDigits = to_string(n).size();
    int nDigits = (n == 0) ? 1 : (int)log10(n) + 1;
    for(int i=0;i<4-nDigits;i++){
        cout << 0;
    }
    cout << n;

    // int n,nDigits=0;
    // cin>>n;
    // int nCopy = n;
    // while(nCopy!=0){
    //     nDigits++;
    //     nCopy/=10;
    // }
    // if(n==0) nDigits=1;
    // cout << nDigits << "\n";
    // for(int i=0;i<4-nDigits;i++){
    //     cout << 0;
    // }
    // cout << n;
}