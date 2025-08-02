#include <bits/stdc++.h>
using namespace std;

void printInterval(string s){
    cout << "Interval " << s;
}

int main(){
    float x;
    cin>>x;
    if(x<0 || x>100){
        cout << "Out of Intervals";
    }else{
        if(x<=25){
            printInterval("[0,25]");
        }else if(x<=50){
            printInterval("(25,50]");
        }else if(x<=75){
            printInterval("(50,75]");
        }else{
            printInterval("(75,100]");
        }
    }
}