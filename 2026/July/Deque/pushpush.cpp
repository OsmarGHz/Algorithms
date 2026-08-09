#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    int n,i;
    cin>>n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (i = 0; i < n; i++){
        if(i%2==0){
            dq.push_back(a[i]);
        }else{
            dq.push_front(a[i]);
        }
    }
    
    if(i%2!=0){
        for (int it = dq.size()-1; it >= 0; it--)
        {
            cout << dq[it] << " ";
        }
    }else{
        for (int it = 0; it < dq.size(); it++)
        {
            cout << dq[it] << " ";
        }
        
    }
}