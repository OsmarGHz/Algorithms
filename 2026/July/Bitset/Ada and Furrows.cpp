#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int q, x, y;
    cin>>q;
    char c;
    vector<bitset<20000>> a(20000);
    for (int i = 0; i < q; i++)
    {
        cin>>c>>x>>y;
        if(c=='+'){
            a[x].set(y);
        }else if(c=='-'){
            a[x].reset(y);
        }else if(c=='v'){
            cout << (a[x]|a[y]).count() << "\n";
        }else if(c=='^'){
            cout << (a[x]&a[y]).count() << "\n";
        }else if(c=='!'){
            cout << (a[x]^a[y]).count() << "\n";
        }else{
            cout << (a[x]&(~a[y])).count() << "\n";
        }
    }
    
}