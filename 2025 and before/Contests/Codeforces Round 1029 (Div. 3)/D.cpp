#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int isValid(vector<ll>& a,int n,ll * difference){ //1 = Equal, 2 = Ascendent, 3 = Desc, 0 = NOT Valid, 4 = Doesnt need changes

    *difference = a[1]-a[0];

    for (int i = 2; i < n; i++){
        if(a[i]-a[i-1]==*difference){
            continue;
        }else{
            return 0;
        }
    }

    if(*difference==0){
        if(a[0]==0) return 4;
        return 1;
    }else if(*difference>0){
        return 2;
    }else if(*difference<0){
        return 3;
    }else{
        return 0;
    }
    
}

int applyOp1(vector<ll>& a, int n, ll difference){
    int everyEleIs0 = 1;
    for (int i = 0; i < n; i++){
        a[i] -= (i+1)*difference; //i
        if(a[i]<0) return -1;
        if(a[i]!=0){ everyEleIs0=0; }
    }
    return everyEleIs0;
}

int applyOp2(vector<ll>& a, int n, ll difference){
    int everyEleIs0 = 1;
    for (int i = 0; i < n; i++){
        a[i] -= (n - (i+1) + 1)*(-difference); //n-i+1. LA DIFERENCIA OG ES -
        if(a[i]<0) return -1;
        if(a[i]!=0) everyEleIs0=0;
    }
    return everyEleIs0;
}

int doubleOp(vector<ll>& a, int n){
    int everyEleIs0 = 1, resDoubleOp = 0;
    if(a[0]%(n+1)==0) {
        resDoubleOp = a[0];
    }
    for (int i = 0; i < n; i++){
        a[i] -= resDoubleOp;
        if(a[i]<0) return -1;
        if(a[i]!=0) everyEleIs0=0;
    }
    return everyEleIs0;
}

void solve2(vector<ll>& a, int n, int type, ll difference){
    int done = 0;
    if(type==4){
        cout << "Yes";
        return;
    }else if(type==2){
        done = applyOp1(a,n,difference);
    }else if(type==3){
        done = applyOp2(a,n,difference);
    }

    if(done==0){
        if(doubleOp(a,n)) cout << "Yes\n";
        else cout << "no\n";
    }else if(done==1){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}

void solve(){
    int n,type;
    ll difference;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    

    type = isValid(a,n,&difference);
    if(type){
        solve2(a,n,type,difference);
    }else{
        cout << "NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}