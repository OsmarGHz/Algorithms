#include <iostream>
#include <string>
using namespace std;

int main(){
    int k,n,i;
    cin >> k >> n;
    if (3*k<n || (2*k)-1>n) cout << "*";
    else{
        i=1;
        while (i<3*k){
            a[i]='X';
            i+=3;
        }
        if (3*k!=n){
            i=0;
            while (i<a.length() && a.length()!=n){
                a.erase(a.begin()+i);
                i+=2;
            }
            if (a.length()!=n) a.pop_back();
        }
    }
    cout << a;
}