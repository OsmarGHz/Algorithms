#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,antIndex,sigIndex;
    cin>>n;
    deque<int> a(n);
    ll costo=0;
    multiset<pair<int,int>> ms; //maxElement, id
    vector<vector<int>> references(n); //at id: and, sig, firstElement, secondElement
    pair<int,int> aux, auxOfIt1, auxOfIt2;
    multiset<pair<int,int>>::iterator it,itAux1,itAux2;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        references[i] = {(i-1+n)%n,(i+1+n)%n,a[i],a[(i+1+n)%n]};
    }

    for (int i = 0; i < references.size(); i++){
        ms.emplace(max(references[i][2],references[i][3]),i);
    }
    while(ms.size()>2){
        it = ms.begin();
        aux = *it;
        costo += aux.first;
        antIndex = references[aux.second][0];
        sigIndex = references[aux.second][1];
        itAux1 = ms.find({max(references[antIndex][2],references[antIndex][3]),antIndex});
        itAux2 = ms.find({max(references[sigIndex][2],references[sigIndex][3]),sigIndex});

        references[antIndex][1] = sigIndex;
        references[antIndex][3] = aux.first;
        references[sigIndex][0] = antIndex;
        references[sigIndex][2] = aux.first;
        ms.erase(it);

        auxOfIt1 = *itAux1;
        ms.erase(itAux1);
        auxOfIt2 = *itAux2;
        ms.erase(itAux2);
        auxOfIt1.first = max(references[antIndex][2],references[antIndex][3]);
        auxOfIt2.first = max(references[sigIndex][2],references[sigIndex][3]);
        ms.insert(auxOfIt1);
        ms.insert(auxOfIt2);
    }
    costo += (ms.begin())->first;
    cout << costo;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    
}