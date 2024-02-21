#include <iostream>
using namespace std;

int main(){
    //Recuerda: long(C++) = int(otrosLenguajes). long long(C++) = long(otrosLenguajes).
    int size,n;
    long long total=0,missedNumber,sum=0;
    cin >> n;
    size=n-1;
    int allNumbers[size];
    for (int i = 0; i < size; i++)
    {
        cin >> allNumbers[i];
        sum+=allNumbers[i];
    }
    total=(long long)n*(n+1)/2;
    missedNumber=total-sum;
    cout << missedNumber;
    return 0;
}