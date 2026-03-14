#include <iostream>
using namespace std;

int main(){
    int n,max=0,min=101,uMax,uMin,sec=0,aux;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]>max)
        {
           max=a[i];
           uMax=i;
        }
        if (a[i]<=min)
        {
           min=a[i];
           uMin=i;
        }
    }
    while (uMax>0 || uMin<n-1)
    {
        if (uMax==uMin+1)
        {
            aux=a[uMax];
            a[uMax]=a[uMin];
            a[uMin]=aux;
            uMax--;
            uMin++;
            sec++;
        }else if (uMax>0)
        {
            aux=a[uMax];
            a[uMax]=a[uMax-1];
            a[uMax-1]=aux;
            uMax--;
            sec++;
        }else if (uMin<n)
        {
            aux=a[uMin];
            a[uMin]=a[uMin+1];
            a[uMin+1]=aux;
            uMin++;
            sec++;
        }
    }
    cout << sec;
    return 0;
}