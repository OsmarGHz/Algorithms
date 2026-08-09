#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int total=0;
        stack<char> st;
        st.push(directions[0]);
        for (int i = 1; i < directions.size(); i++){
            if(st.top()=='S'){
                if(directions[i]=='S'){
                    
                }else if(directions[i]=='L'){
                    total+=1;
                }else if(directions[i]=='R'){
                    st.pop();
                    st.push('R');
                }
            }else if(st.top()=='L'){
                if(directions[i]=='S'){
                    st.pop();
                    st.push('S');
                }else if(directions[i]=='L'){
                    
                }else if(directions[i]=='R'){
                    st.pop();
                    st.push('R');
                }
            }else if(st.top()=='R'){
                if(directions[i]=='S'){
                    total+=st.size();
                    st = {};
                    st.push('S');
                }else if(directions[i]=='L'){
                    total+=st.size()+1;
                    st = {};
                    st.push('S');
                }else if(directions[i]=='R'){
                    st.push('R');
                }
            }
        }
        return total;
    }
};