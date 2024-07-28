#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main(){
    lli g, n, i, counter=0;
    string glifoW,secuenciaS;
    unordered_map <char,lli> hashmapGlifo, hashmapSecuencia;
    cin >> g >> n >> glifoW >> secuenciaS;
    for (i = 0; i < g; i++){
        if (hashmapGlifo.count(glifoW[i])) hashmapGlifo[glifoW[i]]++;
        else hashmapGlifo.insert(pair<char,lli> (glifoW[i],1));

        if (hashmapSecuencia.count(secuenciaS[i])) hashmapSecuencia[secuenciaS[i]]++;
        else hashmapSecuencia.insert(pair<char,lli> (secuenciaS[i],1));
    }

    if (hashmapGlifo == hashmapSecuencia) counter++;
    
    for (; i < n; i++){
        if (hashmapSecuencia.count(secuenciaS[i])) hashmapSecuencia[secuenciaS[i]]++;
        else hashmapSecuencia.insert(pair<char,lli> (secuenciaS[i],1));

        if (hashmapSecuencia[secuenciaS[i-g]]==1) hashmapSecuencia.erase(secuenciaS[i-g]);
        else hashmapSecuencia[secuenciaS[i-g]]--;
        
        if (hashmapGlifo == hashmapSecuencia) counter++;
    }
    cout << counter;
}