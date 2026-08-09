#include <bits/stdc++.h>
using namespace std;

long long sumFloor(long long n){
    long long res = 0;
    for(long long i = 1, j; i <= n; i = j + 1){
        long long q = n / i;
        j = n / q;
        res += q * (j - i + 1);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while(T--){
        long long n;
        cin >> n;
        cout << sumFloor(n) << '\n';
    }
    return 0;
}
