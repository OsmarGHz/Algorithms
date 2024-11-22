#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
using lli = long long int;

void makeSubsequence(int vSize, vector<lli>&sec, vector<int>&subsec, map<int,set<int>>&mapa, map<int,set<int>>&mapaEle){
    int temp;
    for (int i = 0; i < vSize; i++){
        temp=0;
        for (int j = 0; j < i; j++) if(sec[j]<sec[i] && subsec[j]>temp) temp = subsec[j];
        subsec[i]=temp+1;
    }
}

int main(){
    int testCases;
}