#include <iostream>
#include <string>
using namespace std;

int main(){
    int nPeo, nToi, nToiRestan, nPeoActual, i;
    float r;
    cin >> nPeo >> nToi;
    string a(nToi,'-');
    nPeoActual = nPeo;
    nToiRestan = nToi;

    for (i = 0; i < nToi && nPeoActual!=0;nPeoActual--){
        nToiRestan = nToi-i;
        r = nToiRestan/nPeoActual;
        if(r>=2){
            if(i+1<nToi) a[i+1] = 'X';
            i+=3;
        }else{
            a[i] = 'X';
            i+=2;
        }
    }
    
    if(i<nToi || nPeoActual!=0) a = "*";

    cout << a;
}