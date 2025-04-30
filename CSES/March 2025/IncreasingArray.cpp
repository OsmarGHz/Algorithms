#include <iostream>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll count = 0, aux;
    cin >> n;
    ll x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    for(int i=1;i<n;i++){
        if(x[i] < x[i-1]){
            aux = x[i-1]-x[i];
            x[i] += aux;
            count += aux;
        }
    }

    cout << count;
}