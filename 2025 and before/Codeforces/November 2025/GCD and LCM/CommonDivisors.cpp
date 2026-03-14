#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    ll maxGCD,i,counter=0;
    maxGCD = a[0];
    for (int i = 1; i < n; i++){
        maxGCD = gcd(a[i],maxGCD);
    }

    for(i = 1;i*i<maxGCD;i++){
        if(maxGCD%i==0) counter++;
    }
    if(maxGCD==i*i) counter = (counter*2) + 1;
    else counter = counter*2;
    cout << counter;

    //int j;
    // ll counter=1;
    // for (ll i = *min_element(a.begin(),a.end()); i>1; i--){
    //     for (j = 0; j < n; j++){
    //         if(a[j]%i!=0) break;
    //     }
    //     if(j==n) counter++;
    // }
    // cout << counter;
    
}