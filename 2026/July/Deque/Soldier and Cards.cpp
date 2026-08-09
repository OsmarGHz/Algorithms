#include <bits/stdc++.h>
using namespace std;

bool existEqualDeques(deque<int> & dq1, deque<int> & dq2, vector<tuple<deque<int>, deque<int>>> & history){
    for (int i = 0; i < history.size(); i++){
        if(dq1 == get<0>(history[i]) && dq2 == get<1>(history[i])){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,k1,k2,winnerTime=-1, winner=-1,aux;
    deque<int> dq1, dq2;
    vector<tuple<deque<int>, deque<int>>> history;
    cin>>n;
    cin>>k1;
    for (int i = 0; i < k1; i++)
    {
        cin>>aux;
        dq1.push_back(aux);
    }
    cin>>k2;
    for (int i = 0; i < k2; i++)
    {
        cin>>aux;
        dq2.push_back(aux);
    }

    while(!existEqualDeques(dq1,dq2,history)){
        if(dq1.empty()){
            winnerTime=history.size(); winner = 2;
            break;
        }else if(dq2.empty()){
            winnerTime=history.size(); winner = 1;
            break;
        }
        history.emplace_back(dq1,dq2);
        if(dq1.front()>dq2.front()){
            dq1.push_back(dq2.front());
            dq2.pop_front();
            dq1.push_back(dq1.front());
            dq1.pop_front();
        }else{
            dq2.push_back(dq1.front());
            dq1.pop_front();
            dq2.push_back(dq2.front());
            dq2.pop_front();
        }
    }
    if(winner==-1 && winnerTime==-1){
        cout << "-1";
    }else{
        cout << winnerTime << " " << winner;
    }
}