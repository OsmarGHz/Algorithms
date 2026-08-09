#include <bits/stdc++.h>
using namespace std;

bool checkNoFainting(string & s){
    stack <char> st;
    unordered_set<char> temp;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while( !st.empty() && st.top()!='('){
                //cout << "hasta ahora st.top() = " << st.top() << "\n";
                temp.erase(st.top());
                st.pop();
            }
            st.pop();
        }else{
            //cout << s[i] << " ";
            if(!temp.count(s[i])){
                temp.emplace(s[i]);
                st.push(s[i]);
            }else{
                //cout << "Returna false por esto 1. ";
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    cout << (checkNoFainting(s) ? "Yes" : "No");
}