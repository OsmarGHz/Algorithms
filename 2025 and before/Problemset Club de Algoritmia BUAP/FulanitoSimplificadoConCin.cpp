#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long int gasolina, nPreguntas, nAutos, i, infLimit, supLimit, mid, gasPorAuto, sumaARestar;
    cin >> nPreguntas >> nAutos;
    long long int gasSuma[nAutos];
    cin >> gasPorAuto;
    gasSuma[0] = gasPorAuto;
    for (i = 1; i < nAutos; i++){
        cin >> gasPorAuto;
        gasSuma[i] = gasPorAuto + gasSuma[i-1];
    }
    for (i = 0; i < nPreguntas; i++){
        cin >> gasolina;
        infLimit = -1;
        supLimit = nAutos;
        mid = (infLimit+supLimit)/2;
        while (supLimit>infLimit+1){
            if (gasolina>=gasSuma[mid]){
                infLimit = mid;
            }else{
                supLimit = mid;
            }
            mid = (infLimit+supLimit)/2;            
        }
        if (supLimit>0){
            sumaARestar = gasSuma[supLimit-1];
        }else{
            sumaARestar = 0;
        }
        
        cout << supLimit << " " << gasolina-sumaARestar << "\n";
    }
    
}