#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> primes;

void checkPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0) return;
    }
    primes.pb(num);
}

int howManyPrimesDivide(int i){
    int countPrimes=0;
    for(int j=0;j<primes.size();j++){
        if(i%primes[j]==0) countPrimes++;
    }
    return countPrimes;
}

int main(){
    int n,countAlmostPrimes=0;
    cin>>n;
    for(int i=2;i<n;i++){
        checkPrime(i);
    }
    // for(int i=0;i<primes.size();i++){
    //     cout << primes[i] << " ";
    // }
    // cout << "\n";
    for(int i=2;i<=n;i++){
        if(howManyPrimesDivide(i)==2){
            countAlmostPrimes++;
            //cout << i << " ";
        }
    }
    // cout << "\n";
    cout << countAlmostPrimes;
}