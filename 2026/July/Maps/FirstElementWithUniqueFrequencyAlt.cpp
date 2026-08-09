#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> eleFreq, freqNext;
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
            if(freqNext[a[i].first]==1){
                return a[i].first;
            }
        }
        return -1;
    }
};