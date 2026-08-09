#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,nCopy;
    string s;
    cin>>n;
    nCopy=n;
    for (i = 2; nCopy!=1 ; ){
        if(nCopy%i==0){
            s.append(to_string(i));
            nCopy/=i;
            break;
        }else{
            i++;
        }
    }
    for ( ; nCopy!=1 ; ){
        if(nCopy%i==0){
            s.append("x" + to_string(i));
            nCopy/=i;
        }else{
            i++;
        }
    }
    cout << s;
    
}