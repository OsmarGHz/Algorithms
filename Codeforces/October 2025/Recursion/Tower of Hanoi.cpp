#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void hanoi(int n, int start, int end){
    if(n==1){
        cout << start << " " << end << "\n";
    }else{
        int theOther = 6 - start - end;
        hanoi(n-1,start,theOther);
        cout << start << " " << end << "\n";
        hanoi(n-1,theOther,end);
    }
}

int main(){
    int n;
    cin>>n;
    ll res = (1<<n)-1;
    cout << res << "\n";
    hanoi(n,1,3);
}