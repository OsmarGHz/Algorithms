#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<string> a(n);
    map <string,int> mapa;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(mapa.count(a[i])!=0){
            cout << a[i] << mapa[a[i]];
        }else{
            cout << "OK";
        }
        cout << "\n";
        mapa[a[i]]++;
    }
}