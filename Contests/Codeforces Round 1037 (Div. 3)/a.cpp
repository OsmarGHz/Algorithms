#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,minorDigit=10,temp;
    cin >> x;
    while(x!=0){
        temp = x%10;
        if(temp<minorDigit) minorDigit = temp;
        x /= 10;
    }
    cout << minorDigit << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
}