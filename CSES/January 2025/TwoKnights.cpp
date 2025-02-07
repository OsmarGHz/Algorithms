#include <iostream>
using namespace std;
using lli = long long;

int main(){
    lli k, i, square, substract=0;
    cin >> k;
    cout << "0\n";
    for (i = 2; i < k+1; i++){
        square = i*i;
        cout << ((square*(square-1))/2) - substract<< "\n";
        substract+=(8*(i-1));
    }
}