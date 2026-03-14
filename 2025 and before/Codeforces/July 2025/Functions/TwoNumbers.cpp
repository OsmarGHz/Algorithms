#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void printing(string type, float to_print, int a, int b){
    cout << type << " " << a << " / " << b << " = " << to_print << "\n";
}

int main(){
    int a,b;
    cin>>a>>b;
    float res = float(a)/b;
    printing("floor",floor(res),a,b);
    printing("ceil",ceil(res),a,b);
    printing("round",round(res),a,b);
}