#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int total=0, multiplier=1;
        char curr=directions[0];
        for (int i = 1; i < directions.size(); i++){
            if(curr=='R'){
                if(directions[i]=='R'){
                    multiplier++;
                }else if(directions[i]=='L'){
                    total+=1+multiplier;
                    curr = 'S';
                    multiplier=1;
                }else if(directions[i]=='S'){
                    total+=multiplier;
                    curr = 'S';
                    multiplier=1;
                }
            }else if(curr=='L'){
                if(directions[i]=='R'){
                    curr = 'R';
                    multiplier=1;
                }else if(directions[i]=='L'){
                    
                }else if(directions[i]=='S'){
                    curr = 'S';
                    multiplier=1;
                }
            }else if(curr=='S'){
                if(directions[i]=='R'){
                    curr = 'R';
                    multiplier=1;
                }else if(directions[i]=='L'){
                    total++;
                }else if(directions[i]=='S'){

                }
            }
        }
        
        return total;
    }
};