#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,count=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
    int gcdActual = a[0];
    for(int i=1;i<n;i++){
        gcdActual = gcd(gcdActual,a[i]);
    }

    if(gcdActual != 1){
        for(int i=n;i>=1;i--){ //Pos humana, n-1 seria pos maquina
            if(gcd(gcdActual,gcd(a[i-1],i)) == 1){
                count = n-i+1;
                gcdActual=1;
                break;
            }
        }
        // int temp;
        // for(int i=n;i>=1;i--){ //Pos humana, n-1 seria pos maquina
        //     temp = gcd(a[i-1],i);
        //     if(temp < gcdActual){
        //         count = n-i+1;
        //         gcdActual = temp;
        //     }
        //     if(gcdActual==1){
        //         break;
        //     }
        // }
    }

    if(gcdActual != 1 || count>3){
        count=3;
    }
    
    cout << count;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
}