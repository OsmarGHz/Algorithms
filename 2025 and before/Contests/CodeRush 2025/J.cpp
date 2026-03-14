#include <iostream>
using namespace std;

int main(){
    int w,h,swi=0;
    cin >> w >> h;
    char c;
    float count;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> c;
            if((c == '/') || (c == '\\')){
                if(swi == 0){
                    swi++;
                }else if(swi == 1){
                    swi--;
                }
            }
            if(swi==1) count++;
        }
    }
    printf("%.2f", count);
}