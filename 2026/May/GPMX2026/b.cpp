#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin,s);

    int i=0;
    while(i<s.size()){
        if (s[i] == '^' || s[i] == '_') {
            cout << s[i];
            i++;

            if (i < s.size() && s[i] == '{') {
                cout << s[i];
                i++;
                while (i < s.size() && s[i] != '}') {
                    cout << s[i];
                    i++;
                }
                if (i < s.size()) {
                    cout << s[i];
                    i++;
                }
            } else if (i < s.size() && isdigit(s[i])) {
                while (i < s.size() && isdigit(s[i])) {
                    cout << s[i];
                    i++;
                }
            } else if (i < s.size()) {
                cout << s[i];
                i++;
            }
            continue;
        }

        if (isdigit(s[i])) {
            int j = i;
            while(j < s.size() && isdigit(s[j])) j++;

            if( !(i==0 || !isalpha(s[i-1])) || !(j==s.size() || !isalpha(s[j]))){
                int k=i;
                while(k<j){
                    cout << s[k];
                    k++;
                }
            }else{
                if(s[i]=='0'){
                    int k=i;
                    while( k < j ){
                        cout << s[k];
                        k++;
                    }
                }else{
                    int counter=0;
                    while((j-counter)>i){
                        if(s[j-counter-1]=='0'){
                            counter++;
                        }else{
                            break;
                        }
                    }
                    if(counter>=4){
                        if(s[i]=='1' && counter == j-i-1){
                            cout << "10^{" << counter << "}";
                        }else{
                            cout << s[i];
                            if(counter<j-i-1){
                                cout << ".";
                            }
                            int k=i+1;
                            while(k<(j-counter)){
                                cout << s[k];
                                k++;
                            }
                            cout << "\\cdot10^{" << j-i-1 << "}";
                        }
                    }else{
                        int k=i;
                        while(k<j){
                            cout << s[k];
                            k++;
                        }
                    }
                    // if(s[i]==1){
                    //     int k=i;
                    //     while(k<j && s[k]==0){
                    //         k++;
                    //     }
                    //     if(k==j && (j-i-1)>=4){
                    //         cout << "10{" << j-i-1 << "}";
                    //     }else{
                    //         k=i;
                    //         while( k < j ){
                    //             cout << s[k];
                    //             k++;
                    //         }
                    //     }
                    // }else{
                    // }
                }
            }

            i = j;
        } else {
            cout << s[i];
            i++;
        }
    }
    // //int startNum=-1, endNum=-1, sumDig=0, validNumber;
    // size_t startNum=-1, esp=-1;
    // int validNumber, howMany0, fragmentSize;

    // for (startNum = 0; startNum < s.size();startNum=esp+1){

    //     esp = s.find(' ', startNum);
    //     if(esp == std::string::npos){
    //         esp = s.size();
    //     }

    //     fragmentSize = esp-startNum;
    //     if(fragmentSize<5){
    //         validNumber=0;
    //     }else{
    //         validNumber=1;
    //     }

    //     if(validNumber){
    //         for(int i=esp-1;i>=startNum;i--){
    //             if(!isdigit(s[i])){
    //                 validNumber=0;
    //                 break;
    //             }
    //         }
    //     }

    //     if(validNumber){
    //         howMany0=0;

    //         for(size_t i=esp-1;i>=startNum;i--,howMany0++){
    //             if(s[i]!='0'){
    //                 break;
    //             }
    //         }

    //         if(s[startNum] == '1' && howMany0>=4 && howMany0==fragmentSize-1){
    //             cout << "10^{" << howMany0 << "}";
    //         }else if(s[startNum] == '0'){
    //             validNumber=0;
    //         }else{
    //             cout << s[startNum];
    //             if(fragmentSize-howMany0>1){
    //                 cout << '.';
    //             }
    //             for (size_t i = startNum+1; i < esp - howMany0; i++){
    //                 cout << s[i];
    //             }
    //             cout << "\\cdot10^{" << fragmentSize-1 << "}";
    //         }
    //     }
        
    //     if(!validNumber){
    //         for (size_t i = startNum; i < esp; i++){
    //             cout << s[i];
    //         }
    //     }

    //     if(esp!=s.size()){
    //         cout << " ";
    //     }
    // }
    
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