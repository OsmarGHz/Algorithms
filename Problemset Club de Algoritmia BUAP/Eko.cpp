#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

bool fuerzaBruta(vector<lli> troncos, lli woodTarget, lli nTrees, lli mid){
    lli sum=0;
    for (lli i = 0; i < nTrees; i++) if (troncos[i]-mid>0) sum += (troncos[i]-mid);
    if (sum >= woodTarget) return true;
    else return false;
}

int main(){
    lli nTrees, woodTarget, start=0, end=0, mid=0, ans;
    scanf("%lli %lli", &nTrees, &woodTarget);
    vector <lli> troncos(nTrees);
    for (lli i = 0; i < nTrees; i++) scanf("%lli", &troncos[i]);
    end = *max_element(troncos.begin(), troncos.end());
    while (start<=end){
        mid = (start+end)/2;
        if (fuerzaBruta(troncos, woodTarget, nTrees, mid)){
            ans = mid;
            start = mid+1;
        }else end = mid-1;
    }
    cout << ans;
}