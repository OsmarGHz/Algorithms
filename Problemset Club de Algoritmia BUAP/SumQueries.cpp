#include <iostream>
using namespace std;

int main(){
    int nSize,nQueries;
    cin >> nSize >> nQueries;
    long result;
    long array[nSize];
    long sumArray[nSize];
    long queryP1[nQueries];
    long queryP2[nQueries];
    cout << "Put your elements: ";
    for (int i = 0; i < nSize; i++)
    {
        cin >> array[i]; 
    }
    sumArray[0]=array[0];
    cout << sumArray[0] << " ";
    for (int j = 1; j < nSize; j++)
    {   
        sumArray[j]=sumArray[j-1]+array[j];
        cout << sumArray[j] << " ";
    }
    
    for (int k = 0; k < nQueries; k++)
    {
        cout << endl << "Put your query: ";
        cin >> queryP1[k] >> queryP2[k];
        result = sumArray[queryP2[k]-1];
        if (queryP1[k]-2>=0)
        {
            result -= sumArray[queryP1[k]-2];
        }
        
        cout << result << endl;
    }

}