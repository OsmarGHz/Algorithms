#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int nShops, nQueries, infLimit, supLimit, mid, i, presupuesto, respuesta;
    cin >> nShops;
    int pricesOfShops[nShops];
    for (i = 0; i < nShops; i++){
        cin >> pricesOfShops[i];
    }
    sort(pricesOfShops, pricesOfShops+nShops);
    cin >> nQueries;
    for (i = 0; i < nQueries; i++){
        cin >> presupuesto;
        infLimit = -1;
        supLimit = nShops;
        mid = (infLimit + supLimit)/2;
        while (supLimit>infLimit+1){
            if (presupuesto>=pricesOfShops[mid]){
                infLimit = mid;
            }else{
                supLimit = mid;
            }
            mid = (infLimit+supLimit)/2;
        }
        respuesta = supLimit;
        cout << respuesta << endl;
    }
    
}