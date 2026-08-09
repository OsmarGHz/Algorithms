#include <bits/stdc++.h>
using namespace std;

int main(){
    int q,opt,aux;
    cin>>q;
    set<int> st;
    while (q--){
        cin>>opt>>aux;
        if(opt==1){
            st.emplace(aux);
        }else if(opt==2){
            st.erase(aux);
        }else{
            if(st.find(aux)!=st.end()){
                cout << "Yes";
            }else{
                cout << "No";
            }
            cout << "\n";
        }
    }
    
}