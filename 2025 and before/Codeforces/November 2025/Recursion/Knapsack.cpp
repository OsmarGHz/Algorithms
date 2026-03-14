#include <bits/stdc++.h>
using namespace std;
int N,W;
vector<int> w, v;

int maxvalue(int actualV, int actualW, int i){
    if(i<N){
        return (actualW+w[i]<=W) ? max(maxvalue(actualV+v[i],actualW+w[i],i+1),maxvalue(actualV,actualW,i+1)) : maxvalue(actualV,actualW,i+1);
    }
    return actualV;
}

int main(){
    cin>>N>>W;
    w.resize(N); v.resize(N);
    for (int i = 0; i < N; i++){
        cin>>w[i] >> v[i];
    }
    cout << maxvalue(0,0,0);
}