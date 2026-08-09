#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    string aux;
    size_t pos;
    unordered_map <string,string> dic;
    do{
        getline(cin,aux);
        pos = aux.find(" ");
        if(pos==string::npos){
            break;
        }
        dic.emplace(aux.substr(pos+1,aux.size()-1),aux.substr(0,pos));
    }while (aux!="\n");
    while (cin>>aux){
        if(dic.count(aux)){
            cout << dic[aux];
        }else{
            cout << "eh";
        }
        cout << "\n";
    }
}