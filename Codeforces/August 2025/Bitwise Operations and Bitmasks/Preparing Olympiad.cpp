#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r,x,totalLevel,easiest,hardest,n_suitable=0;
    cin>>n>>l>>r>>x;
    vector<int> c(n);

    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=((1<<n)-1);i>=0;i--){
        if(__builtin_popcount(i)>1){
            totalLevel=0;
            easiest=INT_MAX;
            hardest=INT_MIN;
            for(int j=0;j<n;j++){
                if(((i>>j)&1)==1){
                    totalLevel+=c[j];
                    easiest = min(easiest,c[j]);
                    hardest = max(hardest,c[j]);
                }
            }
            //cout << totalLevel << " " << hardest-easiest << "\n";
            if((totalLevel>=l && totalLevel<=r) && ((hardest-easiest)>=x)){
                n_suitable++;
            }
        }
    }
    cout << n_suitable;
}