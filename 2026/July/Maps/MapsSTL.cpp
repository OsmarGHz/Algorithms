#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int q,type,y;
    string x;
    map<string,int> marks;
    cin>>q;
    while (q--)
    {
        cin>>type >> x;
        if(type==1){
            cin>>y;
            marks[x]+=y;
        }else if(type==2){
            marks.erase(x);
        }else{
            auto it = marks.find(x);
            if(it==marks.end()){
                cout << "0";
            }else{
                cout << marks[x];
            }
            cout << "\n";
        }
    }
}