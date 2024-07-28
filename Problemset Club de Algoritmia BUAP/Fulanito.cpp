#include <iostream>
using namespace std;

int main(){
    long long int gasolina, nPreguntas, nAutos, i, infLimit, supLimit, mid;
    cin >> nPreguntas >> nAutos;
    long long int gasPorAuto[nAutos], gasSuma[nAutos];
    cin >> gasPorAuto[0];
    gasSuma[0] = gasPorAuto[0];
    for (i = 1; i < nAutos; i++){
        cin >> gasPorAuto[i];
        gasSuma[i] = gasPorAuto[i] + gasSuma[i-1];
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
        cout << supLimit << " " << gasolina-gasSuma[supLimit-1] << "\n";
    }
    
}