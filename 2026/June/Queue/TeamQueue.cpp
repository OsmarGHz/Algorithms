#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t, cont=1;
    cin>>t;
    //if(t==0) return 0;
    while(t!=0){
        cout << "Scenario #" << cont << "\n";
        int aux;
        vector<queue<int>> teamQueue(t);
        vector<int> teamOfNum(1000000);
        queue<int> q;
        for (int i = 0; i < t; i++){
            int n;
            cin>>n;
            for (int j = 0; j < n; j++){
                cin>>aux;
                teamOfNum[aux]=i;
            }
        }

        string pet;
        cin>>pet;
        while(pet!="STOP"){
            if(pet=="ENQUEUE"){
                int aux;
                cin>>aux;
                if(teamQueue[teamOfNum[aux]].empty()){
                    q.push(teamOfNum[aux]);
                }
                teamQueue[teamOfNum[aux]].push(aux);
            }else if(pet=="DEQUEUE"){
                cout << teamQueue[q.front()].front() << "\n";
                teamQueue[q.front()].pop();
                if(teamQueue[q.front()].empty()){
                    q.pop();
                }
            }
            cin>>pet;
        }
        cout << "\n";
        cont++;
        cin>>t;
    }
}