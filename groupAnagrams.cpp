#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
using namespace std;

void alt(){
    map <vector<int>, int> a;
    if (a.count({1,2,3,4})==0){
        a.insert(pair<vector<int>, int> ({1,2,3,4},1));
    }
    if (a.count({1,2,3,3})==1){
        a[{1,2,3,3}]++;
    }
    if (a.count({1,2,3,4})==1){
        a[{1,2,3,4}]++;
    }
}

vector<vector<string>> groupAnagrams(vector<string>& strs){
    int i;
    vector <int> temp(26);
    vector <vector<string>> anaGrouped;
    map <vector<int>, vector<string>> coincidencias;

    for (string palabra : strs){
        temp.assign(26,0);
        for (char i : palabra){
            temp[i-'a']++;
        }
        if (coincidencias.count(temp) == 1){
            coincidencias[temp].push_back(palabra);
        }else{
            coincidencias.insert(pair<vector<int>, vector<string>>(temp, vector <string> (1,palabra)));
        }
    }

    for (pair <vector<int>, vector<string>> tempString : coincidencias){
        anaGrouped.push_back(tempString.second);
    }

    return anaGrouped;
}

int main(){
    //vector<string> anagrams {"eat","tea","tan","ate","nat","bat"};
    vector<string> anagrams {"a"};
    vector <vector<string>> anaGrouped;
    anaGrouped = groupAnagrams(anagrams);
    //alt();
    return 0;
}