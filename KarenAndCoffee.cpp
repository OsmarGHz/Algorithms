//Warning: Incompleted

#include <iostream>
using namespace std;

int main(){
    int i,n,k,q;
    scanf("%d %d %d",&n,&k,&q);
    int recetas[n][2],queries[q][2];
    for (i = 0; i < n; i++){
        scanf("%d %d",&recetas[i][0],&recetas[i][1]);
    }
    for (i = 0; i < q; i++){
        scanf("%d %d",&queries[i][0],&queries[i][1]);
    }
    
}