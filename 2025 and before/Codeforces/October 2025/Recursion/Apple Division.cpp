#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> p;
ll min_diff = INT_MAX;

void divide(int i, ll g1, ll g2){
    if(i==n){
        min_diff = min(min_diff, abs(g1-g2));
        return;
    }
    divide(i+1, g1+p[i], g2);
    divide(i+1, g1, g2+p[i]);
}

int main(){
    cin>>n;
    p.resize(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }

    divide(0,0,0);
    cout << min_diff;
}