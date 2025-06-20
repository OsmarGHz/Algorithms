#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool fuerzaBruta(vector<int> & paridad, int & n, int & mid){
    int countBit = __builtin_popcount(paridad[mid-1]);
    if(countBit==0 || countBit==1){
        return true;
    }
    for (int i = 1; mid+i-1 < n; i++){
        countBit = __builtin_popcount(paridad[mid+i-1] ^ paridad[i-1]);
        if(countBit==0 || countBit==1){
            return true;
        }
    }
    return false;
}

int solve(string & s, int & n, vector<int> & paridad){
    int ans = 1,counter=n;
    while (counter>0){
        if(fuerzaBruta(paridad, n, counter)) return counter;
        counter--;
    }
    return ans;
}

int main(){
    int n=0;
    string s;
    cin >> n >> s;
    vector<int> paridad(n);
    //paridad[0] = 1 << int(s[0])-97;
    paridad[0] = 1 << (s[0]-'a');
    for(int i=1;i<n;i++){
        paridad[i] = paridad[i-1] ^ (1 << (s[i] - 'a'));
    }
    cout << solve(s,n,paridad);
}