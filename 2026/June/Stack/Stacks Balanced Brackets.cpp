#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string & s){
    stack <char> st;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }else if( !st.empty() && ( (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']') || (st.top()=='(' && s[i]==')') ) ){
            st.pop();
        }else{
            return false;
        }
    }
    return (st.empty() ? true : false);
}

void solve(){
    string s;
    cin>>s;
    cout << (isBalanced(s) ? "YES" : "NO");
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}