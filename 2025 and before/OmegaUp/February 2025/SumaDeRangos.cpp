#include <iostream>
using namespace std;
using lli = long long;

int main(){
    lli suma,megasuma,n,i,actual;
    cin >> n;
    lli numbers[(2*n)-1];
    suma=0;
    megasuma=0;
    
    for (i = 0,actual=1; i < n; i++,actual++){
        numbers[i]=actual;
        suma+=actual;
    }

    if (n!=1)
        for (actual = n-1; i < n+1; i++,actual--){
            numbers[i]=actual;
            suma+=actual;
            megasuma+=suma;
        }
    
    for (actual = n-2; i < (2*n)-1; i++,actual--){
        numbers[i]=actual;
        suma-=numbers[i-n-1];
        suma+=actual;
        megasuma+=suma;
    }
    cout << megasuma;
}