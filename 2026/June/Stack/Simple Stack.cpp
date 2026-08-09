#include <bits/stdc++.h>

using namespace std;
int main(){
    stack<int> st;
    string s;
    int value;
    cin>>s;
    while(s!="exit"){
        if(s=="push"){
            cin>>value;
            st.push(value);
            cout << "ok";
        }else if(s=="pop"){
            cout << st.top();
            st.pop();
        }else if(s=="back"){
            cout << st.top();
        }else if(s=="size"){
            cout << st.size();
        }else if(s=="clear"){
            while(!st.empty()){
                st.pop();
            }
            cout << "ok";
        }
        cout << "\n";
        cin>>s;
    }
    cout << "bye";
}