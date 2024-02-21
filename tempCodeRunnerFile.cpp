#include <iostream>
using namespace std;

int main(){
    int n;
    long long currentNumber,predominant,count=0;
    cin >> n;
    //long long number[n];
    //int repetitions[n];
    cin >> predominant;
    for (int i = 1; i < n; i++)
    {
        cin >> currentNumber;
        if(currentNumber!=predominant){
            count++;
        }
    }
    cout << count;    
}