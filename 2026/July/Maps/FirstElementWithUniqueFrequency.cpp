class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int> eleFreq, freqNext;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(!eleFreq.count(nums[i])){
                a.emplace_back(nums[i]);
                eleFreq.emplace(nums[i],1);
            }else{
                eleFreq[nums[i]]++;
            }
        }
        for(auto & par : eleFreq){
            freqNext[par.second]++;
        }
        for(int i=0;i<a.size();i++){
            if(freqNext[eleFreq[a[i]]]==1){
                return a[i];
            }
        }
        return -1;
    }
};