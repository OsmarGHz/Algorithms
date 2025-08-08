#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t,count=0;
    cin>>s>>t;
    int a, b, c, max_c;
    // for (a=0; a < 101; a++){
    //     for (b=0; b < 101; b++){
    //         for (c=0; c < 101; c++){
    //             if((a*b*c)>t || (a+b+c)>s) break;
    //             count++;
    //         }
    //     }
    // }

    for (a=0; a <= s; a++){
        for (b=0; b <= s-a; b++){
            if(a==0 || b==0){
                max_c = s-a-b;
            }else{
                max_c = min(s-a-b , t/(a*b));
            }
            count+=max_c+1;
            cout << "a=" << a << " b=" << b << " max_c=" << max_c << "\n";
        }
    }
    cout << count;
}