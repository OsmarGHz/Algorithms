#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int total=0, tamDir=directions.size(), i=0, j=tamDir-1;

        while(i<tamDir && directions[i]=='L'){
            i++;
        }

        while(j>=0 && directions[j]=='R'){
            j--;
        }

        if(i>j) return 0;
        
        for(;i<=j;i++){
            if(directions[i]!='S') total++;
        }
        
        return total;
    }
};