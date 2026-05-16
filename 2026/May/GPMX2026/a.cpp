#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,totalBill=0,totalCatched =0;
    cin>>n>>m;
    vector<int>p(n),a(m);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        totalBill += p[i];
    }
    for(int i=0;i<m;i++){
        totalCatched += a[i];
    }

    if((totalBill*1.1)<=totalCatched){
        cout << "YES";
    }else{
        cout << "NO";
    }
}