#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    double resA,resB;
    cin>>a>>b>>c;
    // if( ( (a*a) + (b*b) ) < (c*c) ){
    //     cout << "Yes";
    // }else{
    //     cout << "No";
    // }

    resA = log10((a*a)+(b*b));
    resB = log10(c*c);

    if( resA<resB ){
        cout << "Yes";
    }else{
        cout << "No";
    }
}