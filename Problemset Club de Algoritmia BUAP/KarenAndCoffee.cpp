#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, q, param1, param2, counter;
    cin >> n >> k >> q;
    vector<int> toApply(200001,0), barrido(200001,0), tempsAprobada(200001,0), acumulados(200001,0);
    for (int i = 0; i < n; i++){
        cin >> param1 >> param2;
        toApply[param1]++;
        toApply[param2+1]--;
    }
    
    for (int i = 1; i <= 200001; i++){
        barrido[i] = barrido[i-1] + toApply[i];
        if (barrido[i]>=k) {tempsAprobada[i] = 1;}
        else {tempsAprobada[i] = 0;}
        acumulados[i] = acumulados[i-1] + tempsAprobada[i];
    }
    
    for (int i = 0; i < q; i++){
        cin >> param1 >> param2;
        counter = acumulados[param2] - acumulados[param1-1];
        cout << counter << '\n';
    }
    
}