#include <string>
#include <iostream>
using namespace std;

int main(){
    int textSize,nQueries,felicesEncuentros;
    char currentValue;
    cout << "Ingrese texto Length y cantidad de queries: ";
    cin >> textSize >> nQueries;
    char text[textSize];
    int queryP1[nQueries];
    int queryP2[nQueries];
    cout << "Ingrese el texto: ";
    for (int i = 0; i < textSize; i++)
    {
        cin >> text[i];
    }
    /*for (int i = 0; i < textSize; i++)
    {
        cout << text[i] << endl;
    }*/
    for (int i = 0; i < nQueries; i++)
    {
        cout << "Enter your query: ";
        cin >> queryP1[i] >> queryP2[i];
        felicesEncuentros = 0;
        currentValue = text[queryP1[i]-1];
        cout << "queryp1-1: " << queryP1[i]-1 << " queryp1: " << queryP1[i] << " queryp2-1: " << queryP2[i]-1 << " queryp2: " << queryP2[i] << endl;
        for (int j = queryP1[i]; j < queryP2[i]; j++)
        {
            cout << "currentValue: " << currentValue << endl;
            if (currentValue==text[j])
            {
                felicesEncuentros++;
                cout << "currentValue after if: " << currentValue << endl;
            }else{
                currentValue=text[j];
                cout << "currentValue after else: " << currentValue << endl;
            }
        }
        cout << "Existen: " << felicesEncuentros << " felices encuentros." << endl;
    }
    return 0;
}