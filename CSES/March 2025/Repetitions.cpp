#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    int max=0,count=0;
    char c=0;
    cin >> s;
    int i=0;

    for(i=0;i<s.size();i++){
        if (c==s[i]){
            count++;
        }else{
            c=s[i];
            if (count>max){
                max=count;
            }
            count = 1;
        }
    }
    if (count>max){
        max=count;
    }
    
    cout << max;
}