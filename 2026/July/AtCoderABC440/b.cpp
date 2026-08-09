#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> t(n);
    for (int i = 0; i < n; i++){
        cin>>t[i];
    }
    map<int,int> timeToComp;
    for (int i = 0; i < n; i++){
        timeToComp.emplace(t[i],i);
    }
    map<int,int>::iterator it = timeToComp.begin();
    cout << (it->second)+1 << " ";
    it++;
    cout << (it->second)+1 << " ";
    it++;
    cout << (it->second)+1;
}