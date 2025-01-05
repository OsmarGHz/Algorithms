#include <iostream>
typedef long long int lli;
using namespace std;

int main(){
    lli n,p,impar;
    cin >> n >> p;
    impar = n%2;
    n=(n-p)%(2*p);
    if (!impar && n==p)n-=p;
    cout << n; 
}