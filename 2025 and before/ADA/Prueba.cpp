#include <iostream>
using namespace std;

// n = número de discos
// origen = Poste Origen (A en la 1ra llamada)
// auxiliar = Poste Auxiliar (B en la 1ra llamada)
// destino = Poste Destino (C en la 1ra llamada)
void hanoi(int n, char origen, char auxiliar, char destino) {
    
    // 1. Caso Base (como se ve en el video [00:12:47])
    if (n == 1) {
        cout << "Mover disco 1 de " << origen << " a " << destino << "\n";
        return;
    }

    // 2. Paso Recursivo
    // a. Mover n-1 discos de Origen -> Auxiliar
    //    (Se usa Destino como auxiliar)
    hanoi(n - 1, origen, destino, auxiliar);

    // b. Mover el disco n (base) de Origen -> Destino
    cout << "Mover disco " << n << " de " << origen << " a " << destino << "\n";

    // c. Mover n-1 discos de Auxiliar -> Destino
    //    (Se usa Origen como auxiliar)
    hanoi(n - 1, auxiliar, origen, destino);
}