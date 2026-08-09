#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    int aux;
    priority_queue<int> pq;
    while(true){
        cin>>input;
        if(input=="insert"){
            cin>>aux;
            pq.push(aux);
        }else if(input=="extract"){
            cout << pq.top() << "\n";
            pq.pop();
        }else{
            break;
        }
    }
}