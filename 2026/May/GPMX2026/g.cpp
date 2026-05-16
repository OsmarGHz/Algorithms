#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // set<int> numberSet;
    // vector<int> numbers(n);
    // for (int i = 0; i < n; i++){
    //     cin>>numbers[i];
    //     if(!numberSet.count(numbers[i])){
    //         numberSet.emplace(numbers[i]);
    //     }
    // }
    // cout << n-numberSet.size();

    // vector<int> numbers(n);
    // int counter=0;
    // for (int i = 0; i < n; i++){
    //     cin>>numbers[i];
    // }
    // for (int i = 1; i <= n; i++){
    //     if(i!=numbers[i-1]){
    //         counter++;
    //     }
    // }
    // sort(numbers.begin(), numbers.end());
    // cout << counter;

    // vector<int>freq(n+1,0);
    // int counter=0;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     if(freq[x]==0){
    //         counter++;
    //     }
    //     freq[x]++;
    // }
    // cout << n-counter;

    vector<int>freq(n+1,0);
    int counter=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    for (int i = 1; i <= n; i++){
        if(freq[i]==0) counter++;
    }
    cout << counter;
}