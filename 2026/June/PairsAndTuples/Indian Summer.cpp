#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1,s2;
    set<pair<string,string>> diccio;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        diccio.emplace(s1,s2);
    }
    cout << diccio.size();
}