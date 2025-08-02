#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums(3), numsCopy;
    for (int i = 0; i < 3; i++){
        cin >> nums[i];
    }
    numsCopy = nums;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < 3; i++) cout << nums[i] << "\n";
    cout << "\n";
    for (int i = 0; i < 3; i++) cout << numsCopy[i] << "\n";
}