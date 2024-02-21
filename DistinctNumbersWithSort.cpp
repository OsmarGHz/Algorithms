#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,point=1;
    cin >> n;
    long long number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    sort(number,number+n);
    for (int i = 1; i < n; i++)
    {
        if (number[i]!=number[i-1])
        {
            point++;
        }
    }
    cout << point;
}