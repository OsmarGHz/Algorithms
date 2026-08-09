#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            s.append(to_string(i)+' ');
            s.append(to_string(i+1)+' '+to_string(i+1)+' ');
            s.append(to_string(i)+' ');
            s.append(to_string(i+1)+' ');
            s.append(to_string(i)+' '+to_string(i)+' ');
            s.append(to_string(i+1)+' ');
        }
    }else{
        s.append(to_string(1)+' '+to_string(1)+' ');
        s.append(to_string(2)+' ');
        s.append(to_string(1)+' ');
        s.append(to_string(2)+' ');
        s.append(to_string(3)+' ');
        s.append(to_string(1)+' ');
        s.append(to_string(3)+' ');
        s.append(to_string(2)+' '+to_string(2)+' ');
        s.append(to_string(3)+' '+to_string(3)+' ');
        for(int i=4;i<n;i+=2){
            s.append(to_string(i)+' ');
            s.append(to_string(i+1)+' '+to_string(i+1)+' ');
            s.append(to_string(i)+' ');
            s.append(to_string(i+1)+' ');
            s.append(to_string(i)+' '+to_string(i)+' ');
            s.append(to_string(i+1)+' ');
        }
    }

    cout << s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}