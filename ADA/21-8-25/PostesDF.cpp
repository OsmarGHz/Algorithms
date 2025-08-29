#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main(){
    int n,k,min_diff=INT_MAX;
    cin>>k>>n;
    vector<int> poste(n);
    for(int i=0;i<n;i++){
        cin>>poste[i];
    }
    sort(all(poste));
    for(int i=k-1;i<n;i++){
        min_diff = min(min_diff, poste[i]-poste[i-k+1]);
    }

    cout << min_diff;
}