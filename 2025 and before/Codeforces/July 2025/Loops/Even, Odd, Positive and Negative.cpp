#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,nega=0,posi=0,even=0,odd=0,ao;
    cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++){
    //     cin >> a[i];
    //     if(a[i]%2==0) even++;
    //     else odd++;
    //     if(a[i]>0) posi++;
    //     else if(a[i]<0) nega++;
    // }

    for (int i = 0; i < n; i++){
        cin >> ao;
        if(ao%2==0) even++;
        else odd++;
        if(ao>0) posi++;
        else if(ao<0) nega++;
    }


    // for (int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n; i++){
    //     if(a[i]%2==0) even++;
    //     else odd++;
    //     if(a[i]>0) posi++;
    //     else if(a[i]<0) nega++;
    // }
    cout << "Even: " << even << "\nOdd: " << odd << "\nPositive: " << posi << "\nNegative: " << nega;
}