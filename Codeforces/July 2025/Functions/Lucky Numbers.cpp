#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a,b,iCopy,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        iCopy=i;
        while(iCopy!=0){
            if(iCopy%10!=4 && iCopy%10!=7) break;
            iCopy/=10;
        }
        if(iCopy==0){
            cout << i << " ";
            count++;
        }
    }
    if(count==0) cout << "-1";
}