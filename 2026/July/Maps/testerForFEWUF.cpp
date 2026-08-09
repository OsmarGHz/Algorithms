#include <bits/stdc++.h>
using namespace std;

int firstUniqueFreq(vector<int>& nums) {
    map<int,int> eleFreq, freqNext;
    vector<pair<int,int>> a;
    for(int i=0;i<nums.size();i++){
        if(!eleFreq.count(nums[i])){
            eleFreq.emplace(nums[i],a.size());
            a.emplace_back(nums[i],1);
        }else{
            a[eleFreq[nums[i]]].second++;
        }
    }
    for(int i=0;i<a.size();i++){
        freqNext[a[i].second]++;
    }
    
    for(int i=0;i<a.size();i++){
        if(freqNext[a[i].second]==1){
            return a[i].first;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    cout << firstUniqueFreq(nums);
    
}