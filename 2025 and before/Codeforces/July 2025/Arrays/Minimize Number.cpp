#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// void divide(vector<ll> & a, int & n){
//     for(int i=0;i<n;i++){
//         a[i]/=2;
//     }
// }

// int areAllDivisible(vector<ll> & a, int & n){
//     for(int i=0;i<n;i++){
//         if(a[i]%2!=0) return 0;
//     }
//     return 1;
// }

// int dividing(vector<ll> & a, int & n){
//     for(int i=0;i<n;i++){
//         if(a[i]%2!=0) return 0;
//         else{
//             a[i]/=2;
//         }
//     }
//     return 1;
// }

int maxTimes(vector<ll> & a, int & n){
    int maxCount=INT_MAX,temp;
    for(int i=0;i<n;i++){
        ll tempNum=a[i];
        temp=0;
        while(tempNum%2==0){
            tempNum/=2;
            temp++;
        }
        maxCount=min(maxCount,temp);
    }
    return maxCount;
}

int maxNewTimes(vector<ll> & a, int & n){
    vector<int> temp(n, 0);
    int maxCount = INT_MAX;
    for(int i = 0; i < n; i++){
        ll tempNum = a[i];
        while(tempNum % 2 == 0){
            tempNum /= 2;
            temp[i]++;
        }
        maxCount = min(maxCount, temp[i]);
    }
    return maxCount;
}

int main(){
    int n,count=0;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // while(areAllDivisible(a,n)){
    //     divide(a,n);
    //     count++;
    // }

    // while(dividing(a,n)){
    //     count++;
    // }


    //cout << count;
    // cout << maxTimes(a,n);
    cout << maxNewTimes(a,n);
}