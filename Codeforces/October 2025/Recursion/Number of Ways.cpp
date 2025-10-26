#include <bits/stdc++.h>
using namespace std;

int counter = 0;

void reach(int s, int e){
    if(s==e){
        counter++;
        return;
    }else if(s<e){
        reach(s+1,e);
        reach(s+2,e);
        reach(s+3,e);
    }
}

int main(){
    int s,e;
    cin >> s >> e;
    reach(s,e);
    cout << counter;
}