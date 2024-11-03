#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using lli = long long int;

int main(){
    string s,d,m;
    lli sLong, dLong, mLong, count=0, a=0, aCopy;
    cin >> s >> d >> m;
    sLong = s.size();
    dLong = d.size();
    mLong = m.size();
    if (dLong>=11) count = mLong;
    else{
        for (int i = dLong-1,j=1; i >= 0; i--){
            a+=j*d[i];
        }
        if (a>=mLong){
            count = mLong;
        }else{
            
        }
        
    }
}