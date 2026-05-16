#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin,s);
    //int startNum=-1, endNum=-1, sumDig=0, validNumber;
    size_t startNum=-1, esp=-1;
    int validNumber, howMany0, fragmentSize;

    for (startNum = 0; startNum < s.size();startNum=esp+1){

        esp = s.find(' ', startNum);
        if(esp == std::string::npos){
            esp = s.size();
        }

        fragmentSize = esp-startNum;
        if(fragmentSize<5){
            validNumber=0;
        }else{
            validNumber=1;
        }

        if(validNumber){
            for(int i=esp-1;i>=startNum;i--){
                if(!isdigit(s[i])){
                    validNumber=0;
                    break;
                }
            }
        }

        if(validNumber){
            howMany0=0;

            for(size_t i=esp-1;i>=startNum;i--,howMany0++){
                if(s[i]!='0'){
                    break;
                }
            }

            if(s[startNum] == '1' && howMany0>=4 && howMany0==fragmentSize-1){
                cout << "10^{" << howMany0 << "}";
            }else if(s[startNum] == '0'){
                validNumber=0;
            }else{
                cout << s[startNum];
                if(fragmentSize-howMany0>1){
                    cout << '.';
                }
                for (size_t i = startNum+1; i < esp - howMany0; i++){
                    cout << s[i];
                }
                cout << "\\cdot10^{" << fragmentSize-1 << "}";
            }
        }
        
        if(!validNumber){
            for (size_t i = startNum; i < esp; i++){
                cout << s[i];
            }
        }

        if(esp!=s.size()){
            cout << " ";
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    string str;
    getline(cin,str);
    while(n--){
        solve();
        cout << "\n";
    }
}