#include <bits/stdc++.h>
using namespace std;

string a,b,c;

int main(){
    cin>>a>>b;
    cout << a.size() << " " << b.size() << "\n";
    c = a+b;
    cout << c << "\n";
    swap(a[0],b[0]);
    cout << a << " " << b;
}