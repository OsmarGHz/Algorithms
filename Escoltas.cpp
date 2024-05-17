#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lli;

int main(){
    lli masBajo=10000000000, tamanoA, tamanoB, tamanoC, tamanoTotal, i;
    scanf("%lld %lld %lld", &tamanoA, &tamanoB, &tamanoC);
    tamanoTotal = tamanoA + tamanoB + tamanoC;
    set <lli> a;
    set <lli> b;
    set <lli> c;
    vector <lli> todosLosElementos(tamanoTotal);
    vector <lli> diferenciaGruposDe3(tamanoTotal-2);

    //Hacer busqueda binaria por cada posibilidad a los 3 grupos, para ver cual se acerca mas a cada elemento

    for (i = 0; i < tamanoA; i++){
        scanf("%lld", &todosLosElementos[i]);
        a.insert(todosLosElementos[i]);
    }
    for (; i < tamanoB; i++){
        scanf("%lld", &todosLosElementos[i]);
        b.insert(todosLosElementos[i]);
    }
    for (; i < tamanoC; i++){
        scanf("%lld", &todosLosElementos[i]);
        c.insert(todosLosElementos[i]);
    }
    sort(todosLosElementos.begin(), todosLosElementos.end());
    diferenciaGruposDe3[0] = todosLosElementos[1] - todosLosElementos[0];
    //Los grupos de diferencias se hacen desde la posicion 2 (el numero 3) de todosLosElementos[]
    for (i = 0; i < tamanoTotal-3; i++){
        diferenciaGruposDe3[i] = todosLosElementos[i+2] - todosLosElementos[i];
        
        if (diferenciaGruposDe3[i]<masBajo) masBajo=diferenciaGruposDe3[i];
    }
    
}