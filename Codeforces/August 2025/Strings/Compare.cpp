#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()

string a,b;
int len;

// string solve(){
//     for(int i=0;i<len;i++){
//         if(a[i]<b[i]){
//             return a;
//         }else if(a[i]>b[i]){
//             return b;
//         }
//     }
//     if(a.size()<=b.size()){
//         return a;
//     }else{
//         return b;
//     }
// }

// int main(){
//     cin>>a>>b;
//     len=min(a.size(),b.size());
//     cout << solve();
// }

int main(){
    cin>>a>>b;
    // set<string> mapa;
    // mapa.insert(a);
    // mapa.insert(b);
    // cout << *mapa.begin();
    vector<string> arr;
    arr.pb(a);
    arr.pb(b);
    //cout << *min_element(all(arr));
    cout << min(a,b);
}