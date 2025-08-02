#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,movements;
    int temp;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    do{
        movements=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                movements++;
                // temp=a[i];
                // a[i] = a[i-1];
                // a[i-1] = temp;
                swap(a[i],a[i-1]);
            }
        }
    }while(movements!=0);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}