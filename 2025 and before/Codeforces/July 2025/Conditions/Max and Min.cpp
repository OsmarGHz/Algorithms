#include <bits/stdc++.h>
using namespace std;

int main(){
    int mini=100001,maxi=-100001,curr;
    for (int i = 0; i < 3; i++){
        cin >> curr;
        maxi=max(maxi,curr);
        mini=min(mini,curr);
    }
    cout << mini << " " << maxi;
    // set<int> nums;
    // int a;
    // for (int i = 0; i < 3; i++){
    //     cin >> a;
    //     nums.insert(a);
    // }
    // cout << *nums.begin() << " " << *nums.rbegin();
    // //cout << *(nums.begin()) << " " << *(nums.rbegin());
}