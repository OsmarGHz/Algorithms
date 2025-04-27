#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s[t];
    int n[t];
    int k[t];
    for(int i=0; i<t; i++){
        cin >> n[i] >> k[i];
        cin >> s[i];
    }
    char c;
    int minLetra;
    for (int i = 0; i < t; i++){
        string str = s[i];
        for (int j = 0; j < n[i] && k[i]!=0; j++){
            minLetra = j;
            for (int k = j+1; k < n[i]; k++){
                str[j]
            }
            
        }
        
    }
    
}