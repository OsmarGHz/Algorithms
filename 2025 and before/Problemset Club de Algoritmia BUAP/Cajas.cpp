#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool puedeCon(int mid, vector<int> cajas, int n){
    if (mid<=0) return false;
    
    int i=0, j, cont=0;
    while (i<n){
        for (j = 0; j < mid && i < n; j++){
            if (cajas[i]>=cont) i++;
            else return false;
        }
        cont++;
    }
    return true;
}

int main(){
    int n, bajo, alto, mid, res;
    cin >> n;
    vector <int> cajas(n);
    for (int i = 0; i < n; i++) cin >> cajas[i];
    sort(cajas.begin(), cajas.end());
    alto = n, bajo = 0;

    while (alto>=bajo){
        mid = (alto+bajo)/2;
        if (puedeCon(mid, cajas, n)){
            res = mid;
            alto = mid-1;
        }else{
            bajo = mid+1;
        }
    }
    cout << res;
}