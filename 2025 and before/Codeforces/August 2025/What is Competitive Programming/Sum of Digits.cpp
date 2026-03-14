#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string n;
    ll sum,it=0;
    cin>>n;
    while(n.size()!=1){
        sum=0;
        for(int i=0;i<n.size();i++){
            sum += n[i] - '0';
        }
        n = to_string(sum);
        it++;
    }
    cout << it;
}