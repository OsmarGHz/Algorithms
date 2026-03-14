//Watch out! This is the WORST solution to the Missing Number problem.
#include <iostream>
using namespace std;

int main(){
    int max,aux,size;
    bool needToRepeat = true;
    cin >> max;
    size=max-1;
    int allNumbers[size];
    for (int i = 0; i < size; i++)
    {
        cin >> allNumbers[i];
    }
    while (needToRepeat==true)
    {
        needToRepeat=false;
        for (int j = 0; j < size; j++)
        {
            if (allNumbers[j]>allNumbers[j+1])
            {
                aux=allNumbers[j];
                allNumbers[j]=allNumbers[j+1];
                allNumbers[j+1]=aux;
                needToRepeat=true;
            }
            
        }
    }
    for (int k = 0; k <= size; k++)
    {
        if (k+1!=allNumbers[k])
        {
            cout << k+1;
            break;
        }
        
    }
    
    return 0;
}