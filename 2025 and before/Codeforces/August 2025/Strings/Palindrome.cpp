#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0,j=s.size()-1;i<s.size();i++,j--){
        if(s[i]!=s[j]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}