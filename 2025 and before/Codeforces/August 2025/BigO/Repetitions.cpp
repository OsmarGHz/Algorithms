#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll count=1,max_count=1;
    string s;
    cin>>s;
    char c=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==c){
            count++;
        }else{
            c=s[i];
            max_count=max(max_count,count);
            count=1;
        }
    }
    max_count=max(max_count,count);
    cout << max_count;
}