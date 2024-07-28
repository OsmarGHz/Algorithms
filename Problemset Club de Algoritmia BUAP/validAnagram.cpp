#include <iostream>
#include <string>
#include <map>
using namespace std;


/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char, int> validation;
        for(int i=0; i<s.length(); i++){
            if(validation.count(s[i])==0){
                validation.insert(pair<char, int>(s[i],1));
            }else{
                validation[s[i]]++;
            }
        }
        if (t.length()==s.length()){
            for (int i = 0; i < t.length(); i++){
                if(validation.count(t[i])>1){
                    validation[t[i]]--;
                }else if(validation.count(t[i])==1){
                    validation.erase(t[i]);
                }else return false;
            }
        }

        if (validation.empty()==true){
            return true;
        }else{
            return false;
        }
    }
};

*/

bool isAnagram(string s, string t) {
        map <char, int> validation;
        int res;
        for(int i=0; i<s.length(); i++){
            if(validation.count(s[i])==0){
                validation.insert(pair<char, int>(s[i],1));
            }else{
                validation[s[i]]++;
            }
        }
        if (t.length()==s.length()){
            for (int i = 0; i < t.length(); i++){
                res = validation.count(t[i]);
                if(res==1 && validation[t[i]]>1){
                    validation[t[i]]--;
                }else if (res==1 & validation[t[i]]==1){
                    validation.erase(t[i]);
                }else return false;
            }
        }

        if (validation.empty()==true){
            return true;
        }else{
            return false;
        }
    }

int main(){
    string s = "anagram", t = "nagaram";
    bool answer = isAnagram(s,t);
    cout << answer;
}