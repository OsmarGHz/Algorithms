#include <stdio.h>
using namespace std;

int main(){
    int n=0,nTemp=0,temp=0,contador=0;
    scanf("%d", &n);
    nTemp=n;
    while (nTemp!=0){
        temp=nTemp%10;
        if (temp!=0){
            if (n%temp==0) contador++;
        }
        nTemp/=10;
    }
    printf("%d",contador);
    
}