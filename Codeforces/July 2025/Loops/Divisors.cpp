#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout << i << "\n";
    // }
    vector<int> divs;

    for(int i=1;i*i<=n;i++){
        if(n%i==0) divs.pb(i);
    }
    //if(n/divs[divs.size()-1]!=divs[divs.size()-1]) divs.pb(n/divs[divs.size()-1]);
    for (int i = (n/divs[divs.size()-1] != divs[divs.size()-1]) ? divs.size()-1 : divs.size()-2; i >= 0; i--){
        divs.pb(n/divs[i]);
    }
    for (int i = 0; i < divs.size(); i++){
        cout << divs[i] << "\n";
    }
    
}