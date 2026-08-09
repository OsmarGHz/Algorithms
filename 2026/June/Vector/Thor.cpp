#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
    int n, q, readGlobal=0, minIdxNotRead=0;
    cin>>n>>q;
    vector<bool> notiGeneral;
    vector<int> type(q), x(q), contMinimoLeidos(n, 0);
    vector<vector<int>> appAndIndexNoti(n);
    for (int i = 0; i < q; i++){
        cin>>type[i]>>x[i];
    }

    for(int i=0;i<q;i++){
        if(type[i]==1){
            notiGeneral.pb(false);
            appAndIndexNoti[x[i]-1].pb(notiGeneral.size()-1);
        }else if(type[i]==2){
            for(; contMinimoLeidos[x[i]-1] < appAndIndexNoti[x[i]-1].size(); contMinimoLeidos[x[i]-1]++){
                if( notiGeneral[ appAndIndexNoti[x[i]-1] [contMinimoLeidos[x[i]-1]] ] == false){
                    notiGeneral[ appAndIndexNoti[x[i]-1] [contMinimoLeidos[x[i]-1]] ] = true;
                    readGlobal++;
                }
            }
        }else{
            if(x[i]>minIdxNotRead){
                for(;minIdxNotRead<x[i];minIdxNotRead++){
                    if(notiGeneral[minIdxNotRead]==false){
                        notiGeneral[minIdxNotRead]=true;
                        readGlobal++;
                    }
                }
            }
        }
        
        cout << notiGeneral.size() - readGlobal << "\n";
    }


    
}