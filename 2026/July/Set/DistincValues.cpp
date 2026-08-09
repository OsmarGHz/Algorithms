#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> numbers(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        st.emplace(numbers[i]);
    }
    
    
    cout << st.size();
    
}