#include <iostream>
using namespace std;
typedef long long int lli;

int shipL, shipW, shipH;

lli howMany(int l, int w, int h){
    lli sum=0;
    sum = (shipL/l) * (shipW/w) * (shipH/h);
    return sum;
}

int main(){
    int l, w, h;
    lli max, current;
    cin >> shipL >> shipW >> shipH >> l >> w >> h;
    max = howMany(l,w,h);
    current = howMany(l,h,w); if (current > max) max = current;
    current = howMany(w,l,h); if (current > max) max = current;
    current = howMany(w,h,l); if (current > max) max = current;
    current = howMany(h,l,w); if (current > max) max = current;
    current = howMany(h,w,l); if (current > max) max = current;
    cout << max;
}