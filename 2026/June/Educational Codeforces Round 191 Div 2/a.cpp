#include <bits/stdc++.h>
using namespace std;

int noAi(int & n, int & x, int & y){
    int bothSpeed = x+y;
    return (int) ceil(1.0 * n / bothSpeed);
    //return (1.0*n)/bothSpeed;
}

int ai(int & n, int & x, int & y, int & z){
    // if(n/x <= z) { 
    if ( (int) ceil((1.0*n)/x) <= z ) {
        //cout << " mode 1 ai ";
        return (int) ceil((1.0*n)/x);
    }else{
        //cout << " mode 2 ai ";
        int remaining = n-(x*z);
        //cout << " ---remaining== "<< remaining << "--- ";
        return ((int) ceil((1.0*remaining)/((10*y)+x)) + z);
        // return ( remaining / ( (10*y) + x ) ) + z;
    }
}

void solve(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    //cout << "no ai= " << noAi(n,x,y) << " and ai= " << ai(n,x,y,z) << "\n";
    cout << min(noAi(n,x,y), ai(n,x,y,z));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}