#include <iostream>
using namespace std;

int main(){
    int m,n,cuad,cont=0;
    cin >> m >> n;
    cuad = m*n;
    while (cuad>=2)
    {
        cont++;
        cuad-=2;
    }
    cout << cont;
    
    return 0;
}