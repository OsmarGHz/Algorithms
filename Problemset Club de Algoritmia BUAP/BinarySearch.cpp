#include <iostream>
using namespace std;

int main(){
    int valueN,valueK,lI,lS,mit;
    bool founded=false;
    cin >> valueN >> valueK;
    long n[valueN];
    long k[valueK];
    for (int i = 0; i < valueN; i++)
    {
        cin >> n[i];
    }
    for (int j = 0; j < valueK; j++)
    {
        cin >> k[j];
    }
    for (int l = 0; l < valueK; l++)
    {
        lI=0;
        lS=valueN-1;
        mit=(lI + lS)/2;
        founded=false;
        while (founded==false && lS>=lI)
        {
            if (k[l]==n[mit])
            {
                founded=true;
            }
            else if (k[l]<n[mit])
            {
                lS=mit-1;
                mit=(lI + lS)/2;
            }
            else if (k[l]>n[mit])
            {
                lI=mit+1;
                mit=(lI + lS)/2;
            }
        }
        if (founded==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}