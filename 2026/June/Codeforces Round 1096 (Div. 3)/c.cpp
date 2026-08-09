#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,itOfB=0;
    cin>>n;
    vector<int> a(n),b(n);
    vector<int> statusA(n,0); //0 not added, 1 added
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        if(a[i]%6==0){
            b[itOfB]=a[i];
            statusA[i]=1;
            itOfB++;
        }else if(a[i]%2==0){
            statusA[i]=2;
        }else if(a[i]%3==0){
            statusA[i]=3;
        }else{
            statusA[i]=4;
        }
    }

    for (int i = 0; i < n; i++){
        if(statusA[i]==2){
            b[itOfB]=a[i];
            itOfB++;
        }
    }

    for (int i = 0; i < n; i++){
        if(statusA[i]==4){
            b[itOfB]=a[i];
            itOfB++;
        }
    }

    for (int i = 0; i < n; i++){
        if(statusA[i]==3){
            b[itOfB]=a[i];
            itOfB++;
        }
    }

    for (int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}