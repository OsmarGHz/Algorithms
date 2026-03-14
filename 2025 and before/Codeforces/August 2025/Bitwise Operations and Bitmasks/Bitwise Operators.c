#include <stdio.h>

int main(){
    int n,k,best_and = 0, best_or = 0, best_xor = 0;
    scanf("%d %d",&n,&k);
    int a,b;
    for(a=1;a<=n;a++){
        for(b=a+1;b<=n;b++){
            if(((a&b) < k) && ((a&b) > best_and)){
                best_and = a&b;
            }
            if(((a|b) < k) && ((a|b) > best_or)){
                best_or = a|b;
            }
            if(((a^b) < k) && ((a^b) > best_xor)){
                best_xor = a^b;
            }
        }
    }
    printf("%d\n%d\n%d", best_and, best_or, best_xor);
}