#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
using ll = long long;

int main(){
    int n, m, nErrors;
    char nDigit;
    cin >> n >> m;
    vector <string> word(n);
    vector <string> number(m);
    pair<int,vector<string>> temp;
    for (int i = 0; i < n; i++){
        cin >> word[i];
    }
    for (int i = 0; i < m; i++){
        cin >> number[i];
    }
    for (int i = 0; i < m; i++){
        temp.first = 0;
        temp.second.clear();
        for (int j = 0; j < n; j++){
            if (number[i].size() != word[j].size()) continue;
            nErrors=0;
            for (int k = 0; k < word[j].size(); k++){
                switch (word[j][k]){
                    case 'a': case 'b': case 'c': nDigit = '2'; break;
                    case 'd': case 'e': case 'f': nDigit = '3'; break;
                    case 'g': case 'h': case 'i': nDigit = '4'; break;
                    case 'j': case 'k': case 'l': nDigit = '5'; break;
                    case 'm': case 'n': case 'o': nDigit = '6'; break;
                    case 'p': case 'q': case 'r': case 's': nDigit = '7'; break;
                    case 't': case 'u': case 'v': nDigit = '8'; break;
                    case 'w': case 'x': case 'y': case 'z': nDigit = '9'; break;
                    default: nDigit = '1'; break;
                }
                if (nDigit != number[i][k]){
                    nErrors++;
                }
            }
            if (nErrors==0){
                temp.second.push_back(word[j]);
            }
        }
        temp.first = temp.second.size();
        cout << temp.first;
        for (int j = 0; j < temp.second.size(); j++){
            cout << " " << temp.second[j];
        }
        cout << "\n";
    }
}