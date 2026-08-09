#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int solve(vector<int> & a, vector<int> & arr){
    int x,y,pos1,aux,pos2;
    cin>>x>>y;
    vector<int>::iterator it;
    it = lower_bound(all(a),x);
    if(it==a.end()){
        return x+y-1;
    }
    pos1 = it - a.begin();
    //cout << pos1;
    aux = arr[pos1] - (a[pos1] - x) + y;
    //cout <<"pos1: " << pos1 << "\n";
    //cout <<"saearching: " << aux << "\n";
    it = lower_bound(all(arr),aux);
    if(it==arr.end()){
        it--;
        pos2 = it - arr.begin();
        return a[pos2]+(aux-arr[pos2]);
    }
    pos2 = it - arr.begin();
    //cout <<"pos2: " << pos2 << "\n";
    return a[pos2]-1-(arr[pos2]-aux);
}

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),arr(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(all(a));
    arr[0]=a[0]-1;
    for (int i = 1; i < n; i++){
        arr[i]=arr[i-1]+a[i]-a[i-1]-1;
    }
    while (q--){
        cout << solve(a,arr) << "\n";
    }
    
}