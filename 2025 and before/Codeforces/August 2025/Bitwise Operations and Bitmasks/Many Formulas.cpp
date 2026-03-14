#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int power(int a, int b){
//     int res=a;
//     for(int i=1;i<b;i++){
//         res*=a;
//     }
//     return res;
// }

int main(){
    string s;
    cin>>s;
    int changerSums=s.size()-1, changerSquare=1<<changerSums; //changerSquare=power(2,changerSums)
    ll totalSum=0, tempSum=0, tempNum=0;
    //cout << changerSquare << " -- ";
    //cout << changerSums-1 << " -- ";
    for(ll i=0;i<changerSquare;i++){
        //cout << i << " -- ";
        tempSum=0;
        tempNum=((s[0])-'0');
        for(ll j=changerSums-1, k=0;j>=0;j--,k++){
            //cout << bitset<11>(i) << "\n";
            if((1&(i>>j))==1){    //Symbol of sum in between
                //cout << tempNum << " ";
                tempSum += tempNum;
                tempNum = ((s[k+1])-'0');
            }else{
                tempNum *= 10;
                tempNum += ((s[k+1])-'0');
            }
        }
        //cout << tempNum << " ";
        tempSum+=tempNum;
        //cout << tempSum << "\n";
        totalSum+=tempSum;
    }
    //cout << "\n";
    cout << totalSum;
}