#include <string>
#include <iostream>
#include <vector>
using namespace std;

int countingAlphabet(vector<int> &passDistribution, vector<int> &hashDistribution){
    int cAlphabet = 0, i;
    for (i = 0; i < 26; i++){
        if (passDistribution[i] == hashDistribution[i]) cAlphabet++;
        else break;
    }
    return cAlphabet;
}

string hashSlide(string password, string hash){
    int i, j, countAlphabet;
    vector <int> passDistribution (26, 0), hashDistribution (26, 0);
    if (hash.length() >= password.length()) {
        for (i = 0; i < password.length(); i++){
            passDistribution[password[i]-'a']++;
            hashDistribution[hash[i]-'a']++;
        }
        countAlphabet = countingAlphabet(passDistribution, hashDistribution);

        while (countAlphabet<26 && i < hash.length()){
            countAlphabet = 0;
            hashDistribution[hash[i]-'a']++;
            hashDistribution[hash[i-password.length()]-'a']--;
            countAlphabet = countingAlphabet(passDistribution, hashDistribution);
            i++;
        }
        if (countAlphabet == 26) return "YES";
        else return "NO";        
    }else return "NO";
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int nTest, i;
    string password, hash;

    cin >> nTest;
    for (i = 0; i < nTest; i++){
        cin >> password >> hash;
        cout << hashSlide(password, hash) << "\n";
    }
    
}