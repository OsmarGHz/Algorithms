#include <iostream>
using namespace std;
using lli = long long;

int main(){
    int a,b,suma;
    lli power=1;
    cin >> a >> b;
    suma = a+b;
    cout << suma << "\n" << a-b << "\n" << a/b << "\n" << a*b;
    for (int i = 0; i < suma; i++) power*=2;
    cout << "\n" << power;
}