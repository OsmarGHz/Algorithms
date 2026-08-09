#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    vector<int> x(n);
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }
    for (int i = 0; i < n; i++){
        if(!st.empty()){
            while ( !st.empty() && (x[i] <= x[st.top()]) ){
                //cout << "\n" << x[i] << " of x[" << i << "] vs " << x[st.top()] << " of x[" << st.top() << "]\n";
                st.pop();
            }
            if(!st.empty()){
                cout << st.top()+1 << " ";
            }else{
                cout << "0 ";
            }
        }else{
            cout << "0 ";
        }
        st.push(i);
    }
    
}