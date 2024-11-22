#include <iostream>
using namespace std;
using lli = long long int;

int main(){
    lli n,k,res;
    cin >> n >> k;
    if (n==1){
        cout << k;
    }else{
        res = k/n;
        if ((res*n)+(n-1)<=k){
            cout << res;
        }else{
            res--;
            cout << res;
        }
        
        
    }
    
}