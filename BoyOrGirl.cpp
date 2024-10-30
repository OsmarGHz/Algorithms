#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set <char> characters;
    string word;
    int res;
    cin >> word;
    for (int i = 0; i < word.length(); i++){
        if (characters.count(word[i])==0){
            characters.insert(word[i]);
        }
    }
    res = characters.size();
    if (res%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
}