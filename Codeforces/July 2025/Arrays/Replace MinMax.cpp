#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,minNum=INT_MAX,minPos,maxNum=INT_MIN,maxPos;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<minNum){
            minNum=a[i];
            minPos=i;
        }
        if(a[i]>maxNum){
            maxNum=a[i];
            maxPos=i;
        }
    }
    swap(a[minPos],a[maxPos]);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}