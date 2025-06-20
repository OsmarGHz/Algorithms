#include <bits/stdc++.h>
using namespace std;

void pYes(){
    cout << "Yes\n";
}

void pNo(){
    cout << "No\n";
}

void solve(string s){
    string p;
    cin >> p;
    int sSize=s.size(),pSize=p.size();

    if(pSize%sSize!=0){
        pNo();
    }else{
        for (int i = 0; i < pSize; i+=sSize){
            if (p.substr(i, sSize) != s) {
                pNo();
                return;
            }
        }
        pYes();
    }
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--) solve(s);
}