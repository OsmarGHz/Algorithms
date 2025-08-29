#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll pasosTotales=0, pasosA1, pasosA2, pasosA3, pasosA4;
    cin>>n;
    string pIni, pFin;
    cin >> pIni >> pFin;
    for(int i=0;i<n;i++){
        pasosA1 = abs((pIni[i]-'0')-(pFin[i]-'0'));
        pasosA2 = abs((pIni[i]-'0')-(pFin[i]-'0'+10));
        pasosA3 = abs((pIni[i]-'0')-(pFin[i]-'0'-10));
        pasosTotales += min(pasosA1,min(pasosA2,pasosA3));
        //cout << pasosTotales << " ";
    }
    cout << pasosTotales;
}