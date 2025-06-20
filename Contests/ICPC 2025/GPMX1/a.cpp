#include <bits/stdc++.h>
using namespace std;

void pYes(){
    cout << "Yes\n";
}

void pNo(){
    cout << "No\n";
}

int buscarValido(string s,string p,int sSize, int pSize, int coincidences){
    string::size_type pos=0;
    int reps=0;
    while(pos!=pSize){
        pos = p.find(s,pos);
        if(pos==string::npos) return 0;
        pos += sSize;
        reps++;
    }
    if (reps == coincidences) return 1;
    else return 0;
}

void solve(string s){
    string p;
    cin >> p;
    int sSize=s.size(),pSize=p.size();
    int coincidences = pSize/sSize;
    if(pSize%sSize==0){
        if(buscarValido(s,p,sSize,pSize,coincidences)) pYes();
        else pNo();
    }else{
        pNo();
    }
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--) solve(s);
}