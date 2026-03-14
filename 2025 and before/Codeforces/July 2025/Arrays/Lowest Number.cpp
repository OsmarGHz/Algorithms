#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,minIndex,minNumber=INT_MAX;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<minNumber){
            minIndex = i;
            minNumber = a[i];
        }
    }
    cout << minNumber << " " << minIndex+1;
}