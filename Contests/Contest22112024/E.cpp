#include <iostream>
#include <vector>
using namespace std;
using lli = long long int;

int comparar(lli a, lli b, lli c, lli d){
    if (a < b && a < c && b < d && c < d){
        return 0;
    }else if(b < a && b < d && a < c && d < c){
        return 1;
    }else if(d < b && d < c && b < a && c < a){
        return 2;
    }else{
        return 3;
    }
}

int main(){
    int n;
    cin >> n;
    lli caja[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> caja[i][j];
        }
    }
    int res = comparar(caja[0][0],caja[0][n-1],caja[n-1][0],caja[n-1][n-1]);
    cout << res;
}