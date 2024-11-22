#include <iostream>
#include <vector>
using namespace std;
using lli = long long int;

int main(){
    int n;
    cin >> n;
    vector <lli> fibo(42);
    fibo[0]=0;
    fibo[1]=1;
    for (int i = 2; i < 42; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n+1];
    
}