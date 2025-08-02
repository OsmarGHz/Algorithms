#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    char c;
    int n,n_times;
    cin >> c >> n;
    for(int i=0;i<n;i++){
        cin>>n_times;
        for(int j=0;j<n_times;j++){
            cout << c;
        }
        cout << "\n";
    }
}