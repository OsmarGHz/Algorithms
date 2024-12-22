#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using lli = long long int;

string binarySum(string a, string b){
    int carry=0, sum;
    //Reverse
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if (a.size()>b.size()) b.resize(a.size(),'0');
    else if(b.size()>a.size()) a.resize(b.size(),'0');
    for (int i = 0; i < a.size(); i++) {
        sum = (a[i]-'0') + (b[i]-'0') + carry;
        if (sum>=2){
            a[i] = sum-2+'0';
            carry = 1;
        }else{
            a[i] = sum+'0';
            carry = 0;
        }
    }
    if (carry>=1) a.push_back('1');
    //Anti-reverse
    reverse(a.begin(),a.end());
    return a;
}

string intToBinary(int a){
    string word;
    while (true){
        word.push_back((a%2)+'0');
        if (a/2==0){
            reverse(word.begin(),word.end());
            return word;
        }else a /= 2;
    }
}

int itWillBreak(lli dInt, string &cMoney, string s, string d, string m, string &howMuch){
    if (dInt>cMoney.size()){
        howMuch = binarySum(howMuch,intToBinary(cMoney.size()));
        return 1;
    }else{
        howMuch = binarySum(howMuch,d);
        cMoney.resize(cMoney.size()-dInt);
        cMoney = binarySum(cMoney,s);
        return 0;
    }
}

int main(){
    string s,d,m,cMoney,dReverse,howMuch;
    lli dInt=0, i,j,result;
    cin >> s >> d >> m;
    dReverse = d;
    reverse(dReverse.begin(),dReverse.end());
    for (i = 0, j=1; i < dReverse.size() && i<10; i++,j*=2){
        dInt+=j*(dReverse[i]-'0'); }
    for (; i < dReverse.size(); i++){
        if (dReverse[i]=='1'){
            dInt = 1024;
            break;
        }
    }
    
    cMoney = m;
    if (!(m.size()<dInt) && dInt<=s.size()){
        howMuch = "Infinite money!";
    }else if (d.size()>=11){ howMuch = intToBinary(m.size()); }
    else{
        while (true){ if (itWillBreak(dInt,cMoney,s,d,m,howMuch)) break; }       
    }
    cout << howMuch;
}