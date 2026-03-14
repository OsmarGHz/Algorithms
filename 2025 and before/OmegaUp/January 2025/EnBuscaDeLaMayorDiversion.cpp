#include <iostream>
using namespace std;

int main(){
    int n,lower,sum=0,temp;
    cin >> n;
    cin >> sum;
    lower = sum;
    for (int i = 1; i < n; i++){
        cin >> temp;
        sum += temp;
        if (temp<lower) lower = temp;
    }
    cout << sum-lower;
}