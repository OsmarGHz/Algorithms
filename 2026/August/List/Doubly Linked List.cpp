#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q,aux;
    string s;
    cin>>q;
    list<int> lista;
    while(q--){
        cin>>s;
        if(s=="insert"){
            cin>>aux;
            lista.emplace_front(aux);
        }else if(s=="delete"){
            cin>>aux;
            list<int>::iterator it = lista.begin();
            while(it!=lista.end()){
                if((*it)==aux){
                    lista.erase(it);
                    break;
                }
                advance(it,1);
            }
        }else if(s=="deleteFirst"){
            lista.pop_front();
        }else{
            lista.pop_back();
        }
    }
    list<int>::iterator it = lista.begin();
    if(it!= lista.end()) cout << (*it);
    ++it;
    for(; it != lista.end(); ++it){
        cout << " " << (*it);
    }
    cout << "\n";
}