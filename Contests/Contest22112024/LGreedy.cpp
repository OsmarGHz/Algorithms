#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(nBitsA.begin(),nBitsA.end());
    reverse(nBitsA.begin(),nBitsA.end());
    for (i = 0; i < n; i++){
        res = 0;
        if (nBitsGlobal[nBitsA[i]-1]>=1){
            res += 1;
            nBitsGlobal[nBitsA[i]-1]--;
        }
        for (j = nBitsA[i]-2; j >= 0; j--){
            res = res << 1;
            if (nBitsGlobal[j]>=1){
                res += 1;
                nBitsGlobal[j]--;
            }
        }
        cout << res << " ";
    }
}