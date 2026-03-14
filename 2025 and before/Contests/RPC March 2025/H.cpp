#include <iostream>
using ll = long long;
using namespace std;

int main(){
    ll n, count=0, layer=1;
    cin >> n;
    while (n>0){
        if (n-layer >=0) count++;
        n -= layer;
        layer++;        
    }
    cout << count;
}