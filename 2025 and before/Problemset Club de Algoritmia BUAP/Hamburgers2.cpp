#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
typedef long long int lli;

int nBread, nSausage, nCheese, costBread, costSausage, costCheese, breadNeeded=0, sausageNeeded=0, cheeseNeeded=0;
lli budget;

bool test(lli mid){
    lli moneyRequired, cuantityBread, cuantitySausage, cuantityCheese;
    cuantityBread = (breadNeeded*mid) - nBread;
    cuantitySausage = (sausageNeeded*mid) - nSausage;
    cuantityCheese = (cheeseNeeded*mid) - nCheese;
    if (cuantityBread<0) cuantityBread = 0;
    if (cuantitySausage<0) cuantitySausage = 0;
    if (cuantityCheese<0) cuantityCheese = 0;
    
    moneyRequired = cuantityBread*costBread + cuantitySausage*costSausage + cuantityCheese*costCheese;
    if (moneyRequired<=budget) return true;
    else return false;
    
}

int main(){
    string recipe;
    cin >> recipe;
    cin >> nBread >> nSausage >> nCheese >> costBread >> costSausage >> costCheese >> budget;
    for (auto c : recipe){
        switch (c){
            case 'B': breadNeeded++; break;
            case 'S': sausageNeeded++; break;
            case 'C': cheeseNeeded++; break;
            default: break;
        }
    }
    lli infLimit=0, supLimit=budget+100, mid, currentAnswer=0;
    while (infLimit<=supLimit){
        mid = (infLimit+supLimit)/2;
        if (test(mid)){
            currentAnswer = mid;
            infLimit = mid + 1;
        }else{
            supLimit = mid - 1;
        }
    }
    cout << currentAnswer;
}