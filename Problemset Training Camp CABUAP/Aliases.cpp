#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map <string,int> aliases;
    int n, xWords, uniqueNAMEs=0;
    string NAME, currentName;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> xWords;
        NAME.clear();
        for (int i = 0; i < xWords; i++){
            cin >> currentName;
            NAME.push_back(currentName[0]);
        }
        if (aliases.count(NAME)){
            aliases[NAME]++;
        }else{
            aliases.insert(pair{NAME,1});
        }
    }
    for (pair<string,int> a : aliases){
        if (a.second==1) uniqueNAMEs++;
    }
    cout << uniqueNAMEs;
}