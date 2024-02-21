#include <stdio.h>
 
int main()
{
    int w,result,r2;
    scanf("%i",&w);
    result=w%2;
    r2=(w/2)%2;
    if(result==0 && w>3){
        printf("YES");
    }else if(result==1 || r2==1){
        printf("NO");
    }
    return 0;
}