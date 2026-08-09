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
            ll sumaMitad = suma/2;
            bitset<10001> dp;
            dp.set(0);
            dp[0]=true;
            for(int i=0;i<nums.size(); i++){
                dp = dp | (dp << nums[i]);
            }
            return dp[sumaMitad];
        }
    }
};