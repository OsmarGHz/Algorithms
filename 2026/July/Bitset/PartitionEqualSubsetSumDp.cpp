#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        ll suma=0;
        for(int i=0;i<nums.size(); i++){
            suma += nums[i];
        }
        if(suma%2!=0){
            return false;
        }else{
            vector<bool> dp((suma/2)+1);
            //bitset<suma+1> dp;
            //dp.set(0);
            dp[0]=true;
            for(int i=0;i<nums.size(); i++){
                for(int j=dp.size()-1; j>=nums[i]; --j){
                    dp[j] = dp[j] | dp[j-nums[i]];
                }
            }
            // for(int i=0; i<dp.size() ; i++){
            //     cout << dp[i];
            // }
            return dp[dp.size()-1];
        }
    }
};