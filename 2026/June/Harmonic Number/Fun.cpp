#include <bits/stdc++.h>
using namespace std;

bool fuerzaBruta(int & mid, int & n, int & x){

}

void solve(){
    int n,x;
    cin>>n>>x;
    int end = n, start=1, mid=1, ans=1;
    while(start<=end){
        mid=(start+end)/2;
        if(fuerzaBruta(mid,n,x)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout << ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}