#include <bits/stdc++.h>
using namespace std;

int main(){
    float n,nModn;
    int nInt;
    cin >> n;
    nInt = n;
    nModn = n-nInt;
    if(nModn==0){
        cout << "int " << nInt;
    }else{
        cout << "float " << nInt << " " << nModn;
    }
}