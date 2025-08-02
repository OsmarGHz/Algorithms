#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,actualSpaces, actualAsteri=1;
    cin>>n;
    for(actualSpaces=n-1;actualSpaces>=0;actualSpaces--,actualAsteri+=2){
        for(int i=0;i<actualSpaces;i++){
            cout << " ";
        }
        for(int i=0;i<actualAsteri;i++){
            cout << "*";
        }
        cout << "\n";
    }
}