#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string a;
    cin>>a;
    size_t pos = a.find('0');
    if(pos == string::npos){
        a.pop_back();
    }else{
        a.erase(pos,1);
    }

    cout << a;
}