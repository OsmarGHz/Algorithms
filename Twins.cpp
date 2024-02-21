#include <iostream>
using namespace std;

int main(){
    int n,helper,pointer,sum=0,required,coinsNeeded;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
        helper=coins[i];
        pointer=i;
        while (coins[pointer-1]>helper && pointer>0)
        {
            coins[pointer]=coins[pointer-1];
            pointer--;
        }
        coins[pointer]=helper;
    }
    required=(sum/2)+1;
    sum=0;
    pointer=n-1;
    while (sum<required)
    {
        sum+=coins[pointer];
        coinsNeeded++;
        pointer--;
    }
    cout << coinsNeeded;
    
}