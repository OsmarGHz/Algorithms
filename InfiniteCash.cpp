#include <bits/stdc++.h>
using namespace std;
using lli = long long;

string binarySum(string a, string b){
    int carry=0,sum;
    //Reverse
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size()>b.size()) b.resize(a.size(),'0');
    else if(b.size()>a.size()) a.resize(b.size(),'0');
    for(int i=0;i<a.size();i++){
        sum = (a[i]-'0') + (b[i]-'0') + carry;
        if(sum>=2){
            a[i]=sum-2+'0';
            carry = 1;
        }else{
            a[i]=sum+'0';
            carry = 0;
        }
    }
    if(carry>=1) a.push_back('1');
    //Antireverse
    reverse(a.begin(),a.end());
    return a;
}

string intToBinary(int a){
    string word;
    while(true){
        word.push_back((a%2)+'0');
        if (a/2==0){
            reverse(word.begin(),word.end());
            return word;
        }else a/=2;
    }
}

int itWillBreak(lli dNum, string s, string d, string &m, string &ans){
    if(dNum>m.size()){
        ans = binarySum(ans,intToBinary(m.size()));
        return 1;
    }else{
        m.resize(m.size()-dNum);
        m = binarySum(m,s);
        ans = binarySum(ans,d);
        return 0;
    }
}

int main(){
    lli dNum=0,i,j;
    string s,d,m,sRev,dRev,mRev,ans;
    cin >> s >> d >> m;
    sRev = s, dRev = d, mRev = m;
    reverse(dRev.begin(), dRev.end());
    if(dRev.size()>10) dNum=1024;
    else{ for (i = 0,j = 1; i < 10 && i<dRev.size(); i++,j*=2){ dNum += j*(dRev[i]-'0'); } }
    if(dNum>1003) ans = intToBinary(m.size());
    else if(dNum<=m.size() && dNum<=s.size()) ans = "Infinite money!";
    else while (true) if(itWillBreak(dNum,s,d,m,ans)) break;
    cout << ans;
}