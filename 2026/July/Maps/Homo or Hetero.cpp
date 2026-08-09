#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,numEle=0;
    cin>>n;
    map<int,int> mapa;
    for (int i = 0; i < n; i++)
    {
        string s;
        int k,tamMapa,tipo=0;
        cin>>s>>k;
        if(s=="insert"){
            mapa[k]++;
            numEle++;
        }else{
            auto it = mapa.find(k);
            if(it!=mapa.end()){
                if(it->second>1){
                    it->second--;
                }else{
                    mapa.erase(it);
                }
                
                numEle--;
            }
        }
        tamMapa=mapa.size();
        if (tamMapa>=2){ //Heterogeneous 1
            tipo|=1;
        }
        if(numEle>=2 && numEle>tamMapa){ //Homogeneous 2
            tipo|=2;
        }
        
        if(tipo==0) cout << "neither";
        else if(tipo==1) cout << "hetero";
        else if(tipo==2) cout << "homo";
        else cout << "both";

        cout << "\n";
    }
    
}