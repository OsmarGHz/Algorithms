#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,a;
    getline(cin,s);
    size_t posit = s.find("\\");
    // if(posit != string::npos){
    //     a = s.substr(0,posit);
    // }else{
    //     a = s;
    // }
    a = s.substr(0,posit); //a
    cout << a;
}