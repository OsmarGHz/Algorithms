#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    vector<int> alph(26,0);
    for(int i=0;i<s.size();i++){
        alph[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(alph[i]>0) cout << char(i+'a') << " : " << alph[i] << "\n"; 
    }
}