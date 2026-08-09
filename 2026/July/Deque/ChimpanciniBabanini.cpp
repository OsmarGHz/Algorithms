#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int q,s;
    ll totalRizz=0, sumaEle=0;
    bool rev=0;
    cin>>q;
    deque<ll> b;
    while (q--){
        cin>>s;
        if(s==1){
            if(rev==0){
                b.push_front(b.back());
                b.pop_back();
                totalRizz += sumaEle - (b.size()*b.front());
            }else{
                b.push_back(b.front());
                b.pop_front();
                totalRizz += sumaEle - (b.size()*b.back());
            }
        }else if(s==2){
            rev = !rev;
            totalRizz = ((b.size()+1)*sumaEle)-totalRizz;
        }else{
            int aux;
            cin>>aux;
            sumaEle+=aux;
            if(rev==0){
                b.push_back(aux);
                totalRizz += b[b.size()-1] * b.size();
            }else{
                b.push_front(aux);
                totalRizz += b[0] * b.size();
            }
        }
        cout << totalRizz << "\n";
    }
    
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}