#include <iostream>
using namespace std;
long long v[1000000];

long long fibo(int N){
    //cout << N << " ";
    if(v[N]!=0) return v[N];
    if(N==1) return 1;
    if(N==2) return 1;
    v[N]=fibo(N-1)+fibo(N-2);
    return v[N];
}

int main(){
    int N;
    cin>>N;
    cout << fibo(N);
    return 0;
}