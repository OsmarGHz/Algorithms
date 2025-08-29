#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<(1<<n);i++){
        sum=0;
        for(int j=0;j<n;j++){
            if(((i>>j)&1)==1){
                sum += a[j];
            }else{
                sum -= a[j];
            }
        }
        if( ( (sum%360) + 360 ) % 360 ==0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}