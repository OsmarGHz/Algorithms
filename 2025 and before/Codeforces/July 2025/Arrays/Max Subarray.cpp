#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,maxN;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n-i+1;j++){
    //         maxN = INT_MIN;
    //         for(int k=j;k<j+i;k++){
    //             maxN = max(maxN,a[k]);
    //         }
    //         cout << maxN << " ";
    //     }
    // }
    int j;
    map<int,int> slide;
    for(int i=1;i<=n;i++){
        slide.clear();
        for(j=0;j<i;j++){
            if(slide.count(a[j])==0){
                slide.emplace(a[j],1);
            }else slide[a[j]]++;
        }
        cout << (slide.rbegin())->first << " ";
        for(;j<n;j++){
            if(slide.count(a[j])==0){
                slide.emplace(a[j],1);
            }else slide[a[j]]++;
            slide[a[j-i]]--;
            if(slide[a[j-i]]==0) slide.erase(a[j-i]);
            cout << (slide.rbegin())->first << " ";
        }
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}