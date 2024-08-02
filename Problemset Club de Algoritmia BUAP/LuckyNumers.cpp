#include <iostream>
using namespace std;

int main(){
    int n, index=0, workingDigit, workingPow=1; cin >> n;
    while (n!=0){
        workingDigit = n%10;
        n = n/10;
        if (workingDigit == 4){
            index += workingPow;
        }else if(workingDigit==7){
            index += workingPow*2;
        }
        workingPow *= 2;
    }
    cout << index;
}