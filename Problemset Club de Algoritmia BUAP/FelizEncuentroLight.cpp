#include <iostream>
using namespace std;

int main(){
    int textSize,nQueries,felicesEncuentros=0,queryP1,queryP2;
    char currentValue=0;
    cin >> textSize >> nQueries;
    char textChar;
    int sumArray[textSize];
    for (int i = 0; i < textSize; i++)
    {
        cin >> textChar;
        if (currentValue==textChar)
        {
            felicesEncuentros++;
        }else
        {
            currentValue=textChar;
        }
        sumArray[i]=felicesEncuentros;
    }
    for (int i = 0; i < nQueries; i++)
    {
        cin >> queryP1 >> queryP2;
        felicesEncuentros = sumArray[queryP2-1]-sumArray[queryP1-1];
        cout << felicesEncuentros << endl;
    }
    return 0;
}