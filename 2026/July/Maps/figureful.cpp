#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,t,aux1,aux2;
    string s;
    map<pair<int,int>,string> codes;
    pair<int,int> auxPair;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>aux1>>aux2>>s;
        auxPair = make_pair(aux1,aux2);
        if(codes.find(auxPair)!=codes.end()){
            codes[auxPair]=s;
        }else codes.emplace(auxPair,s);
    }
    cin>>t;
    while (t--)
    {
        cin>>aux1>>aux2;
        cout << codes.find({aux1,aux2})->second << "\n";
    }
}