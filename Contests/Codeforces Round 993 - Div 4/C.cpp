#include <iostream>
using namespace std;
using lli = long long;

int main(){
    int nTests;
    lli m,a,b,c,total,difference;
    cin >> nTests;
    for (int i = 0; i < nTests; i++){
        total = 0;
        difference = 0;
        cin >> m >> a >> b >> c;
        if (a>=m) total += m;
        else total += a;
        if (b>=m) total += m;
        else total += b;
        if (total<2*m){
            difference = (2*m) - total;
            if (c>=difference) total+=difference;
            else total+=c;
        }
        cout << total << "\n";
    }
    
}