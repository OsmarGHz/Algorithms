#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int find_repeated(vector<int> & divisors, int & numberToCompare){
    for (int i = 0; i < divisors.size(); i++){
        if(numberToCompare==divisors[i]) return 1;
    }
    return 0;
}

int find_divisor(int n, vector<int> & divisors){
    vector<int> divisorsActualN;
    for (int i = 2; i*i <= n; i++){
        if(n%i==0){
            if(find_repeated(divisors,i)){
                divisorsActualN.push_back(i);
            }else{
                return i;
            }
        }
    }
    for (int i = divisorsActualN.size()-1; i >= 0; i--){
        if(!find_repeated(divisors,divisorsActualN[i])){
            return divisorsActualN[i];
        }
    }
    return -1;
    
}

void solve(){
    int n;
    cin>>n;
    int copyOfN=n;
    vector<int> divisors;
    for(int i=0;i<2;i++){
        divisors.push_back(find_divisor(copyOfN,divisors));
        if(divisors[i]==-1){ divisors.pop_back(); break;}
        copyOfN/=divisors[i];
    }
    if(!find_repeated(divisors,copyOfN)){
        divisors.push_back(copyOfN);
    }
    if(divisors.size()==3){
        if(divisors[0]*divisors[1]*divisors[2]==n){
            cout << "YES\n";
            for (int i = 0; i < 3; i++){
                cout << divisors[i] << " ";
            }
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout << "\n";
    }
}