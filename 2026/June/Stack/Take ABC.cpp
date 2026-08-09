#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, sRes;
    cin>>s;
    stack<char> st;
    int tamFinal;
    char aux;
    for(int i=0;i<s.size();i++){
        if(s[i]=='C' && st.size()>=2){
            aux = st.top();
            st.pop();
            if(aux=='B' && st.top()=='A'){
                st.pop();
            }else{
                st.push(aux);
                st.push(s[i]);
            }
        }else{
            st.push(s[i]);
        }
    }

    tamFinal=st.size();
    //cout << tamFinal;
    sRes.resize(tamFinal);
    for(int i=tamFinal-1;i>=0;i--){
        sRes[i] = st.top();
        st.pop();
    }
    cout << sRes;
    
}