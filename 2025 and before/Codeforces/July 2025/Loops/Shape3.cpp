#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,actSpaces, actAsteri;
    cin>>n;
    for(actSpaces=n-1,actAsteri=1;actSpaces>=0;actSpaces--,actAsteri+=2){
        for(int i=0;i<actSpaces;i++){
            cout << " ";
        }
        for(int i=0;i<actAsteri;i++){
            cout << "*";
        }
        cout << "\n";
    }
    actSpaces++;
    actAsteri-=2; //Law of the desktop test of a loop
    for(;actSpaces<n;actSpaces++,actAsteri-=2){
        for(int i=0;i<actSpaces;i++){
            cout << " ";
        }
        for(int i=0;i<actAsteri;i++){
            cout << "*";
        }
        cout << "\n";
    }
}