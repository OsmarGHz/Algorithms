#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isAnagram(string s, string t) {
    map <char, int> validation;
    if (t.length()==s.length()){
        int comparison[26] = {0};
        for (int i = 0; i < s.length(); i++) comparison[s[i]-'a']++;
        for (int i = 0; i < s.length(); i++){
            if (comparison[t[i]-'a']==0) return false;
            else comparison[t[i]-'a']--;
        }
        return true;
    }else return false;
}

int main(){
    string s = "anagram", t = "nagaram";
    bool answer = isAnagram(s,t);
    cout << answer;
}