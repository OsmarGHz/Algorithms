#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,x,count,j;
    cin>>n;
    for (int i = 0; i < n; i++){
        count=0;
        cin>>x;
        for (j = 1; j*j < x; j++){
            if(x%j==0){
                count++;
            }
        }
        count*=2;
        if(j*j==x) count++;
        cout << count << "\n";
    }
    
}