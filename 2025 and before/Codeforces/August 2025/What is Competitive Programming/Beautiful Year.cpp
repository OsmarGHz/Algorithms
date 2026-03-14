#include <bits/stdc++.h>
using namespace std;

// set<int> nums;

// bool isAllDifferent(int y){
//     nums.clear();
//     while(y!=0){
//         if(nums.count(y%10)) return false;
//         nums.insert(y%10);
//         y/=10;
//     }
//     return true;
// }

bool isAllDifferent(int y){
    int nums[11] = {};
    while(y!=0){
        if(nums[y%10]!=0) return false;
        nums[y%10]++;
        y/=10;
    }
    return true;
}

int main(){
    int y,isAllDiff=0;
    cin>>y;
    y++;
    while(isAllDifferent(y)==0){
        y++;
    }
    cout << y;
}