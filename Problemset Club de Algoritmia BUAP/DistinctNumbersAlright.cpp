#include <iostream>
#include <set>
using namespace std;

int main(){
    int n,pointer=0,counter=0;
    long long currentNumber;
    cin >> n;
    long long number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
        currentNumber=number[i];
        pointer=i;
        while (number[pointer-1]>currentNumber && pointer>0)
        {
            number[pointer]=number[pointer-1];
            pointer--;
        }
        number[pointer]=currentNumber;
        if (number[pointer]!=number[pointer-1])
        {
            counter++;
        }
    }
    cout << counter;
}