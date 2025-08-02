#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swapper(int & x, int & y){
    int aux = x;
    x=y;
    y=aux;
}

int main(){
    int x,y;
    cin>>x>>y;
    //swapper(x,y);
    swap(x,y);
    cout << x << " " << y;
}