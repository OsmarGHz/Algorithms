#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){
    string s;
    cin >> s;
    vector<int> nums(s.size());
    int eightDigits=0, ledsRemaining;
    for (int i = 0; i < s.size(); i++){
        nums[i] = s[i]-48;
        if(nums[i]==8) eightDigits++;
        else{
            switch (nums[i]){
            case 9: case 6: case 0:
                ledsRemaining+=6;
                break;
            case 5: case 3: case 2:
                ledsRemaining+=5;
                break;
            case 4:
                ledsRemaining+=4;
                break;
            case 7:
                ledsRemaining+=3;
                break;
            case 1:
                ledsRemaining+=2;
                break;
            default:
                break;
            }
        }
    }
    
}