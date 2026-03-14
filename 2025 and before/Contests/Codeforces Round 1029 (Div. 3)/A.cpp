#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,firstClosed, lastClosed,temp;
    cin >> t;
    while(t--){
        cin >> n>>x;
        firstClosed = 11;
        lastClosed = -1;
        for(int i=0; i<n;i++){
            cin >> temp;
            if(temp==1 and i<firstClosed) firstClosed = i;
            else if (temp==1 and i>lastClosed) lastClosed = i;
        }
        firstClosed += x;
        cout << (firstClosed>lastClosed ? "YES\n" : "NO\n");
    }
}