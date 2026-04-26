#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    vector<int> numDivs(1000001,0);
    for(int i=1;i<(numDivs.size());i++){
        for(int j=i;j<(numDivs.size());j+=i){
            numDivs[j]++;
        }
    }
    for(int i=0;i<t;i++){
        cin>>n;
        cout << numDivs[n] << "\n";
    }
}