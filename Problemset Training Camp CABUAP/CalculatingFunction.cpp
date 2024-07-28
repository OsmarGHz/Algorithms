#include <iostream>
using namespace std;
typedef long long int lli;

int main(){
    lli n, sum = 0;
    cin >> n;
    if (n%2!=0){
        sum = -(n/2+1);
    }else{
        sum = n/2;
    }
    cout << sum;
}