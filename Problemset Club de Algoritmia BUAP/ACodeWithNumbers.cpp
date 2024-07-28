#include <string>
#include <iostream>
using namespace std;
int main(){
    int t, i, longitud=0;
    string palabraDecodificada, palabraCodificada;
    cin >> t;
    cin.ignore();
    for (i = 0; i < t; i++){
        getline(cin,palabraCodificada);
        longitud = palabraCodificada.length();
        palabraDecodificada.resize(longitud);
        for (int j = 0; j < longitud; j++){
            switch (palabraCodificada[j]){
                case '.': palabraDecodificada[j] = palabraCodificada[j]; break;
                case '0': palabraDecodificada[j] = 'O'; break;
                case '1': palabraDecodificada[j] = 'I'; break;
                case '2': palabraDecodificada[j] = 'Z'; break;
                case '3': palabraDecodificada[j] = 'E'; break;
                case '4': palabraDecodificada[j] = 'A'; break;
                case '5': palabraDecodificada[j] = 'S'; break;
                case '6': palabraDecodificada[j] = 'G'; break;
                case '7': palabraDecodificada[j] = 'T'; break;
                case '8': palabraDecodificada[j] = 'B'; break;
                case '9': palabraDecodificada[j] = 'P'; break;
                default: palabraDecodificada[j] = palabraCodificada[j]; break;
            }
        }
        //printf("%s\n", palabraDecodificada.c_str());
        cout << palabraDecodificada << "\n";
        palabraDecodificada.clear();
        palabraCodificada.clear();
    }
}