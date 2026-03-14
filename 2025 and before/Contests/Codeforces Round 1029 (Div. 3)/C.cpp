#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& distinct, vector<int>& a, set<int>& mapa, int n){
    int targetDistintos = distinct[n-1], totalDistintos = 0, count=0;
    for (int i = n-1; i >= 0; i--){
        if(mapa.find(a[i])==mapa.end()){
            totalDistintos++;
            mapa.insert(a[i]);
        }
        
        if(targetDistintos==totalDistintos){
            count++;
            mapa.clear();
            totalDistintos=0;
            targetDistintos = distinct[i-1];
        }
    }
    return count;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t,n;
    cin >> t;
    while(t--){
        int count=0;
        cin >> n;
        vector<int> a(n), distinct(n);
        set <int> mapa;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(mapa.find(a[i]) == mapa.end()){
                distinct[i]=1;
                mapa.insert(a[i]);
            }
            distinct[i] += (i ? distinct[i-1] : 0); //Se le suma cero si i es 0. Sino, se suma distinct[i-1]
        }
        mapa.clear();

        count = solve(distinct,a,mapa,n);

        cout << count << "\n";
    }
}