#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void countSubarray(){
    int n;
    cin>>n;
    ll count=0;
    count+=n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>=a[j-1]){
                count++;
            }else{
                break;
            }
        }
    }
    cout << count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        countSubarray();
        cout<<"\n";
    }
}