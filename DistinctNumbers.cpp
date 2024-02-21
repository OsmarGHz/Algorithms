#include <iostream>
#include <set>
using namespace std;

int main(){
    /*int n,point=0;
    long long currentNumber;
    bool isPresent;
    cin >> n;
    long long number[n];
    for (int i = 0; i < n; i++)
    {
        isPresent=false;
        cin >> currentNumber;
        for (int j = 0; j < point; j++)
        {
            if (currentNumber==number[j])
            {
                isPresent=true;
                break;
            }
        }
        if (isPresent==false)
        {
            number[point]=currentNumber;
            point++;
        }
    }
    */
    int n;
    long long currentNumber;
    set <long long> differentNumbers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> currentNumber;
        if (!(differentNumbers.count(currentNumber)))
        {
            differentNumbers.insert(currentNumber);
        }
    }
    cout << differentNumbers.size();    
}