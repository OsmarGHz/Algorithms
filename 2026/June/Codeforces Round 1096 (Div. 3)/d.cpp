#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

void solve(){
    int n,indexOf0_1=-1, indexOf0_2=-1, i, leftIndex, rightIndex, actualMex, maxMex=1;
    cin>>n;
    vector<int> a(2*n);
    for(i=0;i<(2*n);i++){
        cin>>a[i];
    }
    for(i=0;i<(2*n);i++){
        if(a[i]==0){
            indexOf0_1=i;
            i++;
            break;
        }
    }
    for(;i<(2*n);i++){
        if(a[i]==0){
            indexOf0_2=i;
            break;
        }
    }

    leftIndex=indexOf0_1;
    rightIndex=indexOf0_1;
    vector<bool> stateOf(n+1,false);
    while(leftIndex>=0 && rightIndex<2*n && a[leftIndex]==a[rightIndex]){
        stateOf[a[leftIndex]]=true;
        leftIndex--;
        rightIndex++;
    }
    for(actualMex=1;actualMex<=n;actualMex++){
        if(stateOf[actualMex]!=true){
            break;
        }
    }
    maxMex=max(maxMex,actualMex);

    leftIndex=indexOf0_2;
    rightIndex=indexOf0_2;
    vector<bool> stateOf2(n+1,false);
    while(leftIndex>=0 && rightIndex<2*n && a[leftIndex]==a[rightIndex]){
        stateOf2[a[leftIndex]]=true;
        leftIndex--;
        rightIndex++;
    }
    for(actualMex=1;actualMex<=n;actualMex++){
        if(stateOf2[actualMex]!=true){
            break;
        }
    }
    maxMex=max(maxMex,actualMex);

    leftIndex=indexOf0_1;
    rightIndex=indexOf0_2;
    bool palindromo=true;
    vector<bool> stateOf3(n+1,false);

    while(leftIndex<=rightIndex){
        if(a[leftIndex]!=a[rightIndex]){
            palindromo=false;
            break;
        }
        stateOf3[a[leftIndex]]=true;
        leftIndex++;
        rightIndex--;
    }

    if(palindromo){
        leftIndex=indexOf0_1-1;
        rightIndex=indexOf0_2+1;
        while(leftIndex>=0 && rightIndex<2*n && a[leftIndex]==a[rightIndex]){
            stateOf3[a[leftIndex]]=true;
            leftIndex--;
            rightIndex++;
        }
        for(actualMex=1;actualMex<=n;actualMex++){
            if(stateOf3[actualMex]!=true){
                break;
            }
        }
        maxMex=max(maxMex,actualMex);
    }

    cout << maxMex;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}