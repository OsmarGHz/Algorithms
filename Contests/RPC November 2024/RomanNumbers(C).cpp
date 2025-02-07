#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
typedef long long int lli;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    lli n;
    unordered_map <char,int> mapa{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    cin >> n;
    for (int j = 0; j < n; j++){
        lli res=0;
        int reference=0,tam;
        string a;
        cin >> a;
        tam = a.size();
        res+=mapa[a[tam-1]];
        reference = mapa[a[tam-1]];
        for (lli i = tam-2; i >= 0; i--){
            if (mapa[a[i]]>=reference){
                res+=mapa[a[i]];
                reference = mapa[a[i]];
            }else res-=mapa[a[i]];
        }
        cout << res << "\n";
    }
}