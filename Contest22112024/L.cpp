#include <iostream>
#include <vector>
using namespace std;
using lli = long long int;

int main(){
    int n,i,j;
    lli temp, res;
    cin >> n;
    vector <lli> a(n), nBitsA(n), nBitsGlobal(32,0);
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++){
        temp = a[i];
        for (j = 0; temp!=0 ; j++){
            if (temp%2==1) nBitsGlobal[j]++;
            temp = temp >> 1;
        }
        nBitsA[i] = j;
    }
    for (i = 0; i < n; i++){
        res = 0;
        if (nBitsGlobal[0]==1){
            res += 1;
            nBitsGlobal[0]--;
        }
        for (j = 1; j < nBitsA[i]; j++){
            res = res << 1;
            if (nBitsGlobal[j]>=1){
                res += 1;
                nBitsGlobal[j]--;
            }
            
        }
        
    }
    
}