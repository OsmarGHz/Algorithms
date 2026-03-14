#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int countFactors(int i){
    int factors=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            factors++;
        }
    }
    return factors;
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(countFactors(i)==0){
            cout << i << " ";
        }
    }
}
