#include <iostream>
using namespace std;

int main(){
    int n,size,sum=0,total=0,missedNumber;
    cin >> n;
    size=n-1;
    int allNumbers[size];
    for (int i = 0; i < size; i++)
    {
        cin >> allNumbers[i];
        sum+=allNumbers[i];
    }
    for (int j = 1; j <= n; j++)
    {
        total+=j;
    }
    missedNumber=total-sum;
    cout << missedNumber;
    return 0;
}