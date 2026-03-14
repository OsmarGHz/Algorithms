#include <string>
#include <iostream>
using namespace std;

int main(){
    int t=0, i=0, numeros[10], j=0, oAsc, oDes;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        for (j = 0; j < 10; j++){
            scanf("%d", &numeros[j]);
        }
        oAsc=0;
        oDes=0;
        for (j = 0; j < 9; j++){
            if (numeros[j+1]>numeros[j]) oAsc++;
            else if (numeros[j+1]==numeros[j]){
                oAsc++;
                oDes++;
            }else if (numeros[j+1]<numeros[j]){
                oDes++;
            }
        }
        if (oAsc==9 || oDes==9){
            printf("Ordered\n");
        }else{
            printf("Unordered\n");
        }   
    }
    
    /*
    int t=0, i=0, n1=0, n2=0, j=0, ascendente=-1;
    for (i = 0; i < t; i++){
        scanf("%d %d", &n1, &n2);
        if (n1<=n2){
            ascendente=1;
        }else{
            ascendente=0;
        }
        
        for (j = 1; i < 10; i++){
            
        }
        
    }
    */
}