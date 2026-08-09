#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    string s;
    cin>>s;
    int prefixB=0;
    vector<tuple<int,int,char>> tuplas; //preBal
    for(int i=0;i<s.size();i++){
        tuplas.push_back(make_tuple(prefixB, i+1, s[i]));
        if(s[i]=='('){
            prefixB++;
        }else prefixB--;
    }

    //sort (all(tuplas), [] (const auto & a, const auto & b) {
    sort (all(tuplas), [] (const tuple<int,int,char> & a, const tuple<int,int,char> & b) {
        if (get<0>(a) != get<0>(b)){
            return get<0>(a) < get<0>(b);
        } 
        return get<1>(a) > get<1>(b);
    });

    for(int i=0;i<s.size();i++){
        cout << get<2>(tuplas[i]);
    }
}