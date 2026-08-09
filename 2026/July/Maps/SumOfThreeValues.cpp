#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<deque<int>> arrs;
    map<int,int> mapa;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        map<int,int>::iterator it = mapa.find(a[i]);
        if(it==mapa.end()){
            mapa.emplace(a[i],arrs.size());
            arrs.emplace_back(deque<int> {i});
        }else{
            arrs[it->second].emplace_back(i);
        }
        //cout << "a[i] = " << a[i] << " e i = " << i << "\n";
    }
    for (map<int,int>::iterator elem1 = mapa.begin(); elem1 != mapa.end(); ++elem1){
        int tempIdx1 = arrs[elem1->second][0], tempIdx2;
        arrs[elem1->second].pop_front();

        for(map<int,int>::iterator elem2 = elem1; elem2 != mapa.end(); ++elem2){

            if(arrs[elem2->second].size()!=0){
                tempIdx2 = arrs[elem2->second][0];
                arrs[elem2->second].pop_front();
                map<int,int>::iterator elem3 = mapa.find(x-(elem1->first)-(elem2->first));

                // for (int k = 0; k < arrs.size(); k++){
                //     cout << "arrs[" << k << "].size()==" << arrs[k].size() << "\n";
                // }
                // cout << "\n";
                

                if(elem3!=mapa.end()){
                    if(arrs[elem3->second].size()!=0){
                        // for (int k = 0; k < arrs[elem3->second].size(); k++){
                        //     cout << arrs[elem3->second][k] << " ";
                        // }
                        // cout << "\n";
                        cout << tempIdx1+1 << " " << tempIdx2+1 << " " << arrs[elem3->second][0]+1;
                        return 0;
                    }
                }
                arrs[elem2->second].push_front(tempIdx2);
            }
        }
        arrs[elem1->second].push_front(tempIdx1);
    }
    
    cout << "IMPOSSIBLE";
}