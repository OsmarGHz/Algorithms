#include <iostream>
typedef long long int lli;
using namespace std;

int main(){
    lli n,p, mult, res;
    cin >> n >> p;
    mult = n/p;
    while (true){
        res = n-(p*mult);
        if (res%2==0){
            break;
        }else mult--;
    }
    cout << res;
}